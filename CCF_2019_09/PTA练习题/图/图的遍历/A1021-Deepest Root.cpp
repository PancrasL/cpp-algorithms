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
int DFS(int root)
{
    visited[root] = 1;
    int depth = 0;
    for (int i = 0; i < G[root].size(); i++) {
        int adjv = G[root][i];
        if (!visited[adjv]) {
            depth = max(depth, DFS(adjv));
        }
    }
    return depth + 1;
}

int main(void)
{
    int N;
    cin>>N;
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
        vector<int> ans;
        int maxDepth = 0;
        for (int i = 1; i <= N; i++) {
            visited.assign(N + 1, 0);
            int depth = DFS(i);
            if (depth > maxDepth) {
                maxDepth = depth;
                ans.clear();
                ans.push_back(i);
            } else if (depth == maxDepth) {
                ans.push_back(i);
            }
        }
        sort(ans.begin(), ans.end());
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<endl;
    }

    return 0;
}