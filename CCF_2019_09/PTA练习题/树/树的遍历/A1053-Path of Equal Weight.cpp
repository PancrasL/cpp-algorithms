#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct Node {
    int parent;
    int weight;
    vector<int> child;
    Node()
    {
        parent = -1;
        weight = 0;
    }
} tree[110];
vector<int> ans;
int N, M;
int S;
void DFS(int root, long long sum)
{
    sum += tree[root].weight;
    if (tree[root].child.empty()) { //叶节点
        if (sum == S) {
            ans.push_back(root);
        }
    } else { //内节点
        if (sum < S) {
            vector<int>& v = tree[root].child;
            for (int i = 0; i < v.size(); i++) {
                DFS(v[i], sum);
            }
        }
    }
}

void findRoute(vector<int>& route, int node)
{
    while (node != -1) {
        route.push_back(tree[node].weight);
        node = tree[node].parent;
    }
    reverse(route.begin(), route.end());
}

void printAns(vector<int>& v)
{
    if (!v.empty()) {
        cout << v[0];
        int len = v.size();
        for (int i = 1; i < len; i++)
            cout << ' ' << v[i];
    }
    cout << endl;
}

bool cmp(const vector<int>& v1, const vector<int>& v2)
{
    int index = 0;
    int len1 = v1.size();
    int len2 = v2.size();
    while (index < len1 && index < len2) {
        if (v1[index] != v2[index])
            break;
        index++;
    }
    return v1[index] > v2[index];
}
int main(void)
{
    cin >> N >> M >> S;
    //读取权重
    for (int i = 0; i < N; i++) {
        cin >> tree[i].weight;
    }

    //读取树节点
    for (int i = 0; i < M; i++) {
        int parent, K;
        cin >> parent >> K;
        while (K--) {
            int child;
            cin >> child;
            tree[parent].child.push_back(child);
            tree[child].parent = parent;
        }
    }

    //DFS求解答案
    DFS(0, 0);

    //输出结果
    vector<vector<int> > routes(ans.size());
    for (int i = 0; i < ans.size(); i++) {
        findRoute(routes[i], ans[i]);
    }
    sort(routes.begin(), routes.end(), cmp);

    for (int i = 0; i < routes.size(); i++)
        printAns(routes[i]);
}