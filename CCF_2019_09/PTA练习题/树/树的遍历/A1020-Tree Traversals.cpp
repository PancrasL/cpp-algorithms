#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int data1, Node* left1, Node* right1)
        : data(data1)
        , left(left1)
        , right(right1){};
    Node(){};
};

Node* newNode(int data)
{
    Node* p = new Node(data, NULL, NULL);

    return p;
}
int findPos(const vector<int>& seq, int s, int t, int val)
{
    for (int i = s; i <= t; i++)
        if (seq[i] == val)
            return i;
    return -1;
}
Node* creatTree(vector<int>& postOrder, int s1, int t1, vector<int> inOrder, int s2, int t2)
{
    if (t1 < s1)
        return NULL;
    Node* root = newNode(postOrder[t1]);

    int pos = findPos(inOrder, s2, t2, postOrder[t1]); //计算出根节点在中序遍历中的位置
    int leftNum = pos - s2; //左子树节点个数
    int rightNum = t2 - pos; //右子树节点个数

    root->left = creatTree(postOrder, s1, s1 + leftNum - 1, inOrder, s2, pos - 1);
    root->right = creatTree(postOrder, s1 + leftNum, t1 - 1, inOrder, pos + 1, t2);

    return root;
}

void levelTraverse(Node* root, vector<int>& ans)
{
    if (root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* top = q.front();
        q.pop();
        if (top == NULL)
            continue;
        ans.push_back(top->data);
        q.push(top->left);
        q.push(top->right);
    }
}
int main(void)
{
    int N;
    cin >> N;
    vector<int> postOrder(N), inOrder(N);
    for (int i = 0; i < N; i++) {
        cin >> postOrder[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> inOrder[i];
    }
    Node* root = NULL;
    root = creatTree(postOrder, 0, postOrder.size() - 1, inOrder, 0, inOrder.size() - 1);

    vector<int> levelOrder;
    levelTraverse(root, levelOrder);

    if (!levelOrder.empty()) {
        cout << levelOrder[0];
        for (int i = 1; i < levelOrder.size(); i++)
            cout << ' ' << levelOrder[i];
    }
    cout << endl;
    return 0;
}