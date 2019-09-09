#include <iostream>
#include <vector>
using namespace std;
struct Node {
    vector<int> child;
} tree[110];
int N, M;
vector<int> leafNodes(110);
int DFS(int root, int level)
{
    if (tree[root].child.empty()) //是叶节点
    {
        leafNodes[level]++;
        return level;
    }

    vector<int>& v = tree[root].child;
    int depth = 0;
    for (int i = 0; i < v.size(); i++) {
        int newDepth = DFS(v[i], level + 1);
        if (newDepth > depth)
            depth = newDepth;
    }
    return depth;
}
int main(void)
{
    cin >> N >> M;
    if (N == 0) {
        return 0;
    }
    for (int i = 0; i < M; i++) {
        int parent, K;
        cin >> parent >> K;
        while (K--) {
            int c;
            cin >> c;
            tree[parent].child.push_back(c);
        }
    }

    int depth = DFS(1, 0);

    cout << leafNodes[0];
    for (int i = 1; i <= depth; i++) {
        cout << ' ' << leafNodes[i];
    }
    cout<<endl;
    
    return 0;
}