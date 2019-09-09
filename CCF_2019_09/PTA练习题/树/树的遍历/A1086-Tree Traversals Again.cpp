#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int data1 = -1, Node* left1 = NULL, Node* right1 = NULL)
        : data(data1)
        , left(left1)
        , right(right1){};
};

int findPos(const vector<int>& seq, int s, int t, int val)
{
    for (int i = s; i <= t; i++)
        if (seq[i] == val)
            return i;
    return -1;
}

Node* createTree(vector<int>& preOrder, int s1, int t1, vector<int>& inOrder, int s2, int t2)
{
    if (s1 > t1)
        return NULL;
    Node* root = new Node(preOrder[s1]);

    int pos = findPos(inOrder, s2, t2, preOrder[s1]);
    int leftNum = pos - s2;
    int rightNum = t2 - pos;
    root->left = createTree(preOrder, s1 + 1, s1 + leftNum, inOrder, s2, pos - 1);
    root->right = createTree(preOrder, s1 + leftNum + 1, t1, inOrder, pos + 1, t2);

    return root;
}

void postOrderTraverse(vector<int>& postOrder, Node* root)
{
    if (root == NULL)
        return;
    postOrderTraverse(postOrder, root->left);
    postOrderTraverse(postOrder, root->right);
    postOrder.push_back(root->data);
}
int main(void)
{
    int N;
    cin >> N;

    //读取输入，获取前序和中序遍历序列
    string opt;
    int optNum;
    vector<int> preOrder, inOrder;
    stack<int> s;
    for (int i = 0; i < 2 * N; i++) {
        cin >> opt;
        if (opt == "Push") {
            cin >> optNum;
            preOrder.push_back(optNum);
            s.push(optNum);
        } else {
            inOrder.push_back(s.top());
            s.pop();
        }
    }

    //利用前序和中序序列重建二叉树
    Node* root = createTree(preOrder, 0, preOrder.size() - 1, inOrder, 0, inOrder.size() - 1);


    //获得后序遍历序列
    vector<int> postOrder;
    postOrderTraverse(postOrder, root);
    //输出结果
    if (!postOrder.empty()) {
        cout << postOrder[0];
        for (int i = 1; i < postOrder.size(); i++)
            cout << ' ' << postOrder[i];
    }
    cout << endl;

    return 0;
}