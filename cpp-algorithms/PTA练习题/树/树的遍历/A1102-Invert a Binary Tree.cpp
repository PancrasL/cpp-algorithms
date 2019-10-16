#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct Node {
    int parent;
    int left;
    int right;
    Node()
    {
        parent = -1;
    }
} tree[11];
int N;
vector<int> parent(11, -1);
int findRoot()
{
    for (int i = 0; i < N; i++)
        if (parent[i] == -1)
            return i;
    return -1;
}

void reverseLR(int root)
{
    if (root == -1)
        return;
    swap(tree[root].left, tree[root].right);
    reverseLR(tree[root].left);
    reverseLR(tree[root].right);
}

void inOrderTraverse(vector<int>& inOrder, int root)
{
    if (root == -1)
        return;
    inOrderTraverse(inOrder, tree[root].left);
    inOrder.push_back(root);
    inOrderTraverse(inOrder, tree[root].right);
}

void levelTraverse(vector<int>& levelOrder, int root)
{
    queue<int> q;
    q.push(root);
    while (!q.empty()) {
        int top = q.front();
        q.pop();
        if (top == -1)
            continue;
        levelOrder.push_back(top);
        q.push(tree[top].left);
        q.push(tree[top].right);
    }
}

void printVec(vector<int>& vec)
{
    if (!vec.empty()) {
        cout << vec[0];
        for (int i = 1; i < vec.size(); i++)
            cout << ' ' << vec[i];
    }
    cout << endl;
}
int main(void)
{
    //输入
    cin >> N;
    for (int i = 0; i < N; i++) {
        char c1, c2;
        cin >> c1 >> c2;
        if (c1 == '-')
            tree[i].left = -1;
        else {
            tree[i].left = c1 - '0';
            parent[tree[i].left] = i;
        }
        if (c2 == '-')
            tree[i].right = -1;
        else {
            tree[i].right = c2 - '0';
            parent[tree[i].right] = i;
        }
    }
    //反转
    int root = findRoot();
    reverseLR(root);
    //遍历
    vector<int> inOrder;
    vector<int> levelOrder;
    inOrderTraverse(inOrder, root);
    levelTraverse(levelOrder, root);
    //输出
    printVec(levelOrder);
    printVec(inOrder);

    return 0; 
}