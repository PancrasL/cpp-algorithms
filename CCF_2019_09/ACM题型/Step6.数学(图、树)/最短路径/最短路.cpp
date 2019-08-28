#include <iostream>
#include <queue>
using namespace std;
struct ArcNode {
    int v;
    int cost;
    ArcNode(){};
    ArcNode(int v1, int cost1)
        : v(v1)
        , cost(cost1){};
};
bool operator<(const ArcNode& n1, const ArcNode& n2)
{
    return n1.cost > n2.cost;
}
vector<int> visited;
vector<int> cost;
void dijkstra(vector<vector<ArcNode> >& G, int start, int end){
    visited.assign(G.size(), 0);
    cost.assign(G.size(), 0x3f3f3f3f);

    cost[start] = 0;
    priority_queue<ArcNode> q;
    q.push(ArcNode(start, 0));
    while (!q.empty())
    {
        ArcNode front = q.top();
        q.pop();
        if(!visited[front.v]){
            visited[front.v] = 1;
            if(front.v == end)
                return;
            
            for(int i=0;i<G[front.v].size();i++){
                int adjv = G[front.v][i].v;
                int adjcost = G[front.v][i].cost;
                if(!visited[adjv]){
                    int newCost = cost[front.v] + adjcost;
                    if(newCost < cost[adjv]){
                        cost[adjv] = newCost;
                        q.push(ArcNode(adjv, cost[adjv]));
                    }
                }
            }
        }

    }
    
}
int main(void)
{
    int N, M;
    while (true) {
        cin >> N >> M;
        if (N == 0 && M == 0)
            break;
        vector<vector<ArcNode> > G(N + 1);
        for (int i = 0; i < M; i++) {
            int A, B, C;
            cin >> A >> B >> C;
            G[A].push_back(ArcNode(B, C));
            G[B].push_back(ArcNode(A, C));
        }
        dijkstra(G, 1, N);
        cout << cost[N] << endl;
    }
    return 0;
}