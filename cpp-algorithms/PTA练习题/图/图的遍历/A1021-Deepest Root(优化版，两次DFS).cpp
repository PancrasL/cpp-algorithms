#include <algorithm>
#include <iostream>
#include <set>
#include <stdio.h>
#include <vector>
using namespace std;
vector<vector<int> > G;
int find(vector<int>& root, int x)
{
    if (root[x] == -1)
        return x;
    else
        return root[x] = find(root, root[x]);
}
void unionS(vector<int>& root, int a, int b)
{
    int roota = find(root, a);
    int rootb = find(root, b);
    if (roota != rootb) {
        root[roota] = rootb;
    }
}

vector<int> visited;
int maxDepth;
void DFS(vector<int>& ans, int root, int depth)
{
    visited[root] = 1;
    for (int i = 0; i < G[root].size(); i++) {
        int adjv = G[root][i];
        if (!visited[adjv]) {
            DFS(ans, adjv, depth + 1);
        }
    }
    if (maxDepth < depth) {
        ans.clear();
        ans.push_back(root);
        maxDepth = depth;
    } else if (maxDepth == depth) {
        ans.push_back(root);
    }
}

int main(void)
{
    int N;
    cin >> N;
    G.resize(N + 1);
    vector<int> root(N + 1, -1); //并查集寻找判断是否为树
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        G[a].push_back(b);
        G[b].push_back(a);
        unionS(root, a, b);
    }

    set<int> components;
    for (int i = 1; i <= N; i++) {
        components.insert(find(root, i));
    }
    if (components.size() != 1) {
        printf("Error: %d components\n", components.size());
    } else {
        vector<int> v;
        maxDepth = 0;
        visited.assign(N + 1, 0);
        DFS(v, 1, 1);

        vector<int> v1;
        visited.assign(N + 1, 0);
        DFS(v1, v[0], 1);

        set<int> ans;
        for(int i=0;i<v.size();i++){
            ans.insert(v[i]);
        }
        for(int i=0;i<v1.size();i++){
            ans.insert(v1[i]);
        }
        for (set<int>::iterator it = ans.begin(); it != ans.end(); it++) {
            cout << *it << endl;
        }
    }

    return 0;
}