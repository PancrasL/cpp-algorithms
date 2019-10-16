//reference:https://subetter.com/algorithm/b-tree.html
#include "BTree.h"

#include <algorithm>
#include <iostream>
#include <queue>

int main(void)
{
    using std::cout;
    BTree btree(3);
    vector<int> v = { 1, 3, 7, 10, 11, 13, 14, 15, 18, 16, 19, 24, 25, 26, 21, 4, 5, 20, 22, 2, 17, 12, 6 };

    //插入
    cout << "insert:" << endl;
    for (int i = 0; i < v.size(); i++) {
        btree.insert(v[i]);
    }
    btree.print();

    //查找
    cout << "search:" << endl;
    cout << btree.find(0) << endl;
    cout << btree.find(1) << endl;
    cout << btree.find(20) << endl;

    //删除
    cout << "erase:" << endl;
    btree.erase(6);
    btree.print();
    btree.erase(21);
    btree.print();
    btree.erase(20);
    btree.print();
    btree.erase(19);
    btree.print();
    btree.erase(22);
    btree.print();
    btree.erase(0);
    btree.erase(8);
    system("pause");
}

void BTree::destroy(Node* node)
{

    for (int i = 0; i <= node->siblings.size(); i++)
        destroy(node->siblings[i]);

    delete node;
}
Node* BTree::split_child(Node* node)
{
    Node* newNode = new Node(t, node->leaf); //用来存储后一半的keys和孩子节点

    //移动后一半的keys到newNode中
    newNode->keys.assign(node->keys.begin() + t, node->keys.end());
    node->keys.erase(node->keys.begin() + t, node->keys.end());
    //移动后一半的孩子节点到newNode中

    if (!node->leaf) {
        newNode->siblings.assign(node->siblings.begin() + t, node->siblings.end());
        node->siblings.erase(node->siblings.begin() + t, node->siblings.end());
    }
    return newNode;
}
void BTree::insert_non_full(Node* node, int key)
{
    using std::lower_bound;
    if (node->leaf) { //是叶节点
        vector<int>::iterator posIter = lower_bound(node->keys.begin(), node->keys.end(), key);
        node->keys.insert(posIter, key);
    } else {
        vector<int>::iterator posIter = lower_bound(node->keys.begin(), node->keys.end(), key);
        int pos = posIter - node->keys.begin();

        //每次下降时，都要检查下降的那个节点的keys数是不是等于上限2t-1，如果是就要一分为二
        if (node->siblings[pos]->keys.size() == 2 * t - 1) {
            Node* newNode = split_child(node->siblings[pos]);
            int midKey = node->siblings[pos]->keys[t - 1];
            node->siblings[pos]->keys.pop_back();

            node->keys.insert(node->keys.begin() + pos, midKey);
            node->siblings.insert(node->siblings.begin() + pos + 1, newNode);

            if (key > midKey)
                pos++;
        }

        insert_non_full(node->siblings[pos], key);
    }
}
void BTree::insert(int key)
{
    if (root == nullptr) { //没有根，创建一个新节点
        root = new Node(t, true);
        root->keys.push_back(key);
    } else {
        if (root->keys.size() == 2 * t - 1) { //根节点的keys满了
            //创建新的根节点
            Node* newRoot = new Node(t, false);

            //将原节点一分为二，后一半数据存放在newNode中
            Node* newNode = split_child(root);
            //将中间的那个值上移
            newRoot->keys.push_back(root->keys[t - 1]);
            root->keys.pop_back();

            newRoot->siblings.push_back(root);
            newRoot->siblings.push_back(newNode);

            int i = 0;
            if (key > newRoot->keys[0])
                i++;

            insert_non_full(newRoot->siblings[i], key);

            root = newRoot;
        } else {
            insert_non_full(root, key);
        }
    }
}
void BTree::print()
{
    using namespace std;
    if (root) {
        queue<Node*> Q;
        Q.push(root);

        while (!Q.empty()) {
            Node* node = Q.front();
            Q.pop();

            for (int i = 0; i < node->keys.size(); i++)
                cout << node->keys[i] << " ";
            cout << endl;

            if (!node->leaf) {
                for (int i = 0; i < node->siblings.size(); i++)
                    Q.push(node->siblings[i]);
            }
        }

        cout << endl;
    }
}

bool BTree::find_real(Node* node, int key)
{
    using std::lower_bound;
    vector<int>::iterator posIter = lower_bound(node->keys.begin(), node->keys.end(), key);
    if (*posIter == key) {
        return true;
    }
    if (node->leaf == false) {
        int posIndex = posIter - node->keys.begin();
        return find_real(node->siblings[posIndex], key);
    }
    return false;
}

bool BTree::find(int key)
{
    if (root == nullptr)
        return false;
    return find_real(root, key);
}
void BTree::merge(Node* node, int posIndex)
{
    Node* cur = node->siblings[posIndex];
    Node* right = node->siblings[posIndex + 1];

    //将夹在中间的key移过来
    cur->keys.push_back(node->keys[posIndex]);

    //合并兄弟节点cur和right
    cur->keys.insert(cur->keys.end(), right->keys.begin(), right->keys.end());
    if (!cur->leaf) {
        cur->siblings.insert(cur->siblings.end(), right->siblings.begin(), right->siblings.end());
    }

    //将夹在中间的那个key移走
    node->keys.erase(node->keys.begin() + posIndex);
    node->siblings.erase(node->siblings.begin() + posIndex + 1);

    delete right;
}
void BTree::erase_real(Node* node, int key)
{
    using std::lower_bound;
    //查找第一个大于等于key的位置
    vector<int>::iterator posIter = lower_bound(node->keys.begin(), node->keys.end(), key);
    const int posIndex = posIter - node->keys.begin();

    //如果在当前节点找到key
    if (posIndex < node->keys.size() && node->keys[posIndex] == key) {
        if (node->leaf) { //如果当前节点是叶节点，直接删除
            node->keys.erase(posIter);
        } else { //如果当前节点是内点，分三种情况
            //如果key的左边那个孩子节点keys数大于t-1，就用key的前驱替换key，问题转化为删除前驱
            if (node->siblings[posIndex]->keys.size() > t - 1) {
                Node* left = node->siblings[posIndex];

                //查找前驱
                while (!left->leaf) {
                    left = left->siblings[left->keys.size()];
                }

                //使用前驱替换key
                int precursorKey = left->keys.back();
                node->keys[posIndex] = precursorKey;

                //删除前驱
                erase_real(node->siblings[posIndex], precursorKey);
            }
            //如果key的右边孩子节点keys数大于t-1，就用key的后继替换key，问题转化为删除后继
            else if (node->siblings[posIndex + 1]->keys.size() > t - 1) {
                Node* right = node->siblings[posIndex + 1];

                //查找后继
                while (!right->leaf) {
                    right = right->siblings[0];
                }

                //使用后继替换key
                int successorKey = right->keys[0];
                node->keys[posIndex] = successorKey;

                //删除后继
                erase_real(node->siblings[posIndex + 1], successorKey);
            }
            //如果左右两个孩子节点keys都等于t-1，进行合并操作，再删除
            else {
                merge(node, posIndex);
                erase_real(node->siblings[posIndex], key);
            }
        }
    }
    //未在当前节点找到key
    else {
        if (node->leaf) { //当前节点是叶节点，说明不存在key
            cout << "The key " << key << "does not exists!" << endl;
            return;
        }
        bool flag = (posIndex == node->keys.size()) ? true : false;

        //每次下降的时候，都要检查下那个节点的keys数是不是等于t-1，如果是就要做填充处理，分为三种情况
        if (node->siblings[posIndex]->keys.size() == t - 1) {
            //左兄弟节点keys数大于t-1
            if (posIndex != 0 && node->siblings[posIndex - 1]->keys.size() > t - 1) {
                Node* cur = node->siblings[posIndex];
                Node* left = node->siblings[posIndex - 1];

                cur->keys.insert(cur->keys.begin(), node->keys[posIndex - 1]);
                node->keys[posIndex - 1] = left->keys.back();
                left->keys.pop_back();
                if (!cur->leaf) {
                    cur->siblings.insert(cur->siblings.begin(), left->siblings.back());
                    left->siblings.pop_back();
                }
            }
            //右兄弟节点keys数大于t-1
            else if (posIndex != node->keys.size() && node->siblings[posIndex + 1]->keys.size() > t - 1) {
                Node* cur = node->siblings[posIndex];
                Node* right = node->siblings[posIndex + 1];

                cur->keys.push_back(node->keys[posIndex]);
                node->keys[posIndex] = right->keys[0];
                right->keys.erase(right->keys.begin());

                if (!right->leaf) {
                    cur->siblings.push_back(right->siblings[0]);
                    right->siblings.erase(right->siblings.begin());
                }
            }
            //左右兄弟的节点keys数都等于t-1，它们进行合并
            else {
                if (posIndex != node->keys.size()) {
                    merge(node, posIndex);
                } else {
                    merge(node, posIndex - 1);
                }
            }
        }
        if (flag && posIndex > node->keys.size())
            erase_real(node->siblings[posIndex - 1], key);
        else
            erase_real(node->siblings[posIndex], key);
    }
}
void BTree::erase(int key)
{
    if (root == nullptr)
        return;

    erase_real(root, key);

    if (root->keys.empty()) {
        Node* p = root;
        if (root->leaf)
            root = nullptr;
        else
            root = root->siblings[0];

        delete p;
    }
}
BTree::BTree(int t)
{
    this->t = t;
    this->root = nullptr;
}

BTree::~BTree()
{
    if(root)
        destroy(root);
}
