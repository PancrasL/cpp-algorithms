#include <iostream>
#include <vector>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
int N;

void insert(Node*& root, int data)
{
    if (root == NULL) {
        root = new Node;
        root->data = data;
        root->left = root->right = NULL;
        return;
    }
    if (data < root->data) {
        insert(root->left, data);

    } else {
        insert(root->right, data);
    }
}

void preOrder(vector<int>& v, Node* root)
{
    if (root != NULL) {
        v.push_back(root->data);
        preOrder(v, root->left);
        preOrder(v, root->right);
    }
}

void preOrderMirror(vector<int>& v, Node* root)
{
    if (root != NULL) {
        v.push_back(root->data);
        preOrderMirror(v, root->right);
        preOrderMirror(v, root->left);
    }
}

void postOrder(vector<int>& v, Node* root)
{
    if (root != NULL) {
        postOrder(v, root->left);
        postOrder(v, root->right);
        v.push_back(root->data);
    }
}

void postOrderMirror(vector<int>& v, Node* root)
{
    if (root != NULL) {
        postOrderMirror(v, root->right);
        postOrderMirror(v, root->left);
        v.push_back(root->data);
    }
}
int cmp(vector<int>& pre, vector<int>& preMirror, vector<int>& target)
{
    if(pre == target)
        return 1;
    else if(preMirror == target)
        return 2;
    return 0;
}

void printAns(const vector<int>& v)
{
    if (!v.empty()) {
        cout << v[0];
        int len = v.size();
        for (int i = 1; i < len; i++)
            cout << ' ' << v[i];
    }
    cout << endl;
}
int main(void)
{
    cin >> N;
    vector<int> target(N);
    Node* root = NULL;
    for (int i = 0; i < N; i++) {
        cin >> target[i];
        insert(root, target[i]);
    }

    vector<int> pre, preMirror;
    preOrder(pre, root);
    preOrderMirror(preMirror, root);

    int type = cmp(pre, preMirror, target);
    if (type == 0)
        cout << "NO" << endl;
    else if (type == 1) { //BST
        vector<int> post;
        postOrder(post, root);
        cout << "YES" << endl;
        printAns(post);
    } else { //BST Image
        vector<int> postMirror;
        postOrderMirror(postMirror, root);
        cout << "YES" << endl;
        printAns(postMirror);
    }

    return 0;
}