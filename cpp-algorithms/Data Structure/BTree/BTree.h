//reference:https://subetter.com/algorithm/b-tree.html
#include <vector>
using namespace std;
struct Node {
    bool leaf; //是否是叶子节点
    vector<int> keys; //关键字
    vector<Node*> siblings; //保存孩子指针

    Node(int t, bool leaf)
    {
        this->leaf = leaf;
    }
};

class BTree {
private:
    int t; //最小度
    Node* root;

private:
    void destroy(Node* node);
    Node * split_child(Node* node);
    void insert_non_full(Node* node, int key);
    bool find_real(Node* node, int key);
    void merge(Node* node, int posIndex);
    void erase_real(Node* node, int key);

public:
    BTree(int t);
    ~BTree();
    void insert(int key);
    bool find(int key);
    void erase(int key);
    void print();
};
