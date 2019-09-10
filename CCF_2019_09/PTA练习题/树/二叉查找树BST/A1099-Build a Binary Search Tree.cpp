#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
struct Node {
    int data;
    int left;
    int right;
    Node()
    {
        left = -1;
        right = -1;
    }
} tree[110];
void levelTraverse(int root, vector<int>& v)
{
    queue<int> q;
    q.push(root);
    while (!q.empty()) {
        int top = q.front();
        q.pop();
        if (top != -1) {
            v.push_back(tree[top].data);
            q.push(tree[top].left);
            q.push(tree[top].right);
        }
    }
}
int index;
vector<int> dataVec;
void inOrderTraverse(int root)
{
    if (root != -1) {
        inOrderTraverse(tree[root].left);
        tree[root].data = dataVec[index++];
        inOrderTraverse(tree[root].right);
    }
}
void printVec(const vector<int>& v)
{
    if (!v.empty()) {
        cout << v[0];
        int len = v.size();
        for (int i = 1; i < len; i++)
            cout << ' ' << v[i];
    }
    cout << endl;
}
int N;
int main(void)
{
    //读取输入创建BST
    cin >> N;
    for (int i = 0; i < N; i++) {
        int left, right;
        cin >> left >> right;
        tree[i].left = left;
        tree[i].right = right;
    }
    //读取节点数据
    for (int i = 0; i < N; i++) {
        int data;
        cin >> data;
        dataVec.push_back(data);
    }
    sort(dataVec.begin(), dataVec.end());

    //中序遍历填入节点数据
    inOrderTraverse(0);

    //层序遍历
    vector<int> ans;
    levelTraverse(0, ans);

    //输出结果
    printVec(ans);

    return 0;
}