#include <queue>
#include <stdio.h>
#include <vector>
using namespace std;
int minCost;
int minLen;
struct ArcNode {
    int v;
    int len;
    int cost;
    ArcNode(){};
    ArcNode(int v1, int len1, int cost1)
        : v(v1)
        , len(len1)
        , cost(cost1){};
};
bool operator<(const ArcNode& n1, const ArcNode& n2)
{
        return n1.len > n2.len;
}
void dijkstra(vector<vector<ArcNode> >& G, vector<int>& cost, vector<int>& len, int start, int terminate)
{
    vector<int> visited(G.size(), 0);
    priority_queue<ArcNode> q;
    q.push(ArcNode(start, 0, 0));
    len[start] = 0;
    cost[start] = 0;
    while (!q.empty()) {
        ArcNode front = q.top();
        q.pop();
        if (!visited[front.v]) {
            visited[front.v] = 1;
            if (front.v == terminate)
                return;
            for (int i = 0; i < G[front.v].size(); i++) { //访问v的所有邻接点
                int adjv = G[front.v][i].v;
                int adjLen = G[front.v][i].len;
                int adjCost = G[front.v][i].cost;
                if (!visited[adjv]) {
                    int newLen = len[front.v] + adjLen;
                    int newCost = cost[front.v] + adjCost;

                    if (newLen < len[adjv]) { //有更短的路径，更新len和cost
                        cost[adjv] = newCost;
                        len[adjv] = newLen;
                        q.push(ArcNode(adjv, len[adjv], cost[adjv]));
                    } else if ((newLen == len[adjv]) && (newCost < cost[adjv])) { //路径一样长，选择cost小的那一条
                        cost[adjv] = newCost;
                    }
                    
                }
            }
        }
    }
}
int main(void)
{
    int n, m;
    while (true) {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0)
            break;

        vector<vector<ArcNode> > G(n + 1);
        for (int i = 1; i <= m; i++) {
            int a, b, c, d;
            scanf("%d %d %d %d", &a, &b, &c, &d);
            G[a].push_back(ArcNode(b, c, d));
            G[b].push_back(ArcNode(a, c, d));
        }
        int start, terminate;
        scanf("%d %d", &start, &terminate);
        vector<int> cost(n + 1, 0x3f3f3f);
        vector<int> len(n + 1, 0x3f3f3f);
        dijkstra(G, cost, len, start, terminate);
        minLen = len.at(terminate);
        minCost = cost.at(terminate);
        printf("%d %d\n", minLen, minCost);
    }
    return 0;
}