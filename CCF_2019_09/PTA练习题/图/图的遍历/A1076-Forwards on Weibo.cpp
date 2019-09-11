#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct Node {
    int id;
    int level;
    Node(int id1, int level1)
        : id(id1)
        , level(level1)
    {
    }
};
int N, L;
vector<vector<int> > G(1010);
vector<int> visited;
int BFS(int root)
{
    int cnt = 0;
    queue<Node> q;
    q.push(Node(root, 0));
    visited[root] = 1;
    while (!q.empty()) {
        Node top = q.front();
        q.pop();
        if (top.level > L)
            return cnt;
        cnt++;
        for (int i = 0; i < G[top.id].size(); i++) {
            int adjv = G[top.id][i];
            if (!visited[adjv]) {
                q.push(Node(adjv, top.level + 1));
                visited[adjv] = 1;
            }
        }
    }
    return cnt;
}
int main(void)
{
    cin >> N >> L;
    for (int i = 1; i <= N; i++) {
        int M;
        cin >> M;
        while (M--) {
            int following;
            cin >> following;
            G[following].push_back(i);
        }
    }

    int K;
    cin >> K;
    while (K--) {
        visited.assign(N + 1, 0);
        int id;
        cin >> id;
        int cnt = 0;
        cout << BFS(id) - 1 << endl;
    }
}