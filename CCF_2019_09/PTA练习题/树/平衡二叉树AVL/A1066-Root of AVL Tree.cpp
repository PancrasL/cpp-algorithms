#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
struct node {
    int v, height;
    node *lchild, *rchild;
    node(){};
    node(int v1)
    {
        v = v1;
        height = 1;
        lchild = rchild = NULL;
    }
} * root;
int getHeight(node* root); //获取树高
void updateHeight(node* root); //更新高度
int getBalanceFactor(node* root); //获取平衡因子
void L(node*& root); //左旋
void R(node*& root); //右旋
void insert(node*& root, int v); //插入节点
node* create(vector<int> data); //创建AVL
int main(void)
{
    int n, v;
    cin >> n;
    vector<int> data(n);
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    node* root = create(data);
    cout << root->v << endl;
}
int getHeight(node* root)
{
    if (root == NULL)
        return 0;
    return root->height;
}
void updateHeight(node* root)
{
    root->height = max(getHeight(root->lchild), getHeight(root->rchild)) + 1;
}
int getBalanceFactor(node* root)
{
    return getHeight(root->lchild) - getHeight(root->rchild);
}
void L(node*& root)
{
    node* temp = root->rchild;
    root->rchild = temp->lchild;
    temp->lchild = root;
    updateHeight(root);
    updateHeight(temp);
    root = temp;
}
void R(node*& root)
{
    node* temp = root->lchild;
    root->lchild = temp->rchild;
    temp->rchild = root;
    updateHeight(root);
    updateHeight(temp);
    root = temp;
}
void insert(node*& root, int v)
{
    if (root == NULL) {
        root = new node(v);
        return;
    }
    if (v < root->v) {
        insert(root->lchild, v);
        updateHeight(root);
        if (getBalanceFactor(root) == 2) {
            if (getBalanceFactor(root->lchild) == 1) {
                R(root);
            } else if (getBalanceFactor(root->lchild) == -1) {
                L(root->lchild);
                R(root);
            }
        }
    } else {
        insert(root->rchild, v);
        updateHeight(root);
        if (getBalanceFactor(root) == -2) {
            if (getBalanceFactor(root->rchild) == -1) {
                L(root);
            } else if (getBalanceFactor(root->rchild) == 1) {
                R(root->rchild);
                L(root);
            }
        }
    }
}
node* create(vector<int> data)
{
    node* root = NULL;
    int len = data.size();
    for (int i = 0; i < len; i++) {
        insert(root, data[i]);
    }
    return root;
}
