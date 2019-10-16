#include <iostream>
#include <queue>
#include <vector>
#include <stack>
using namespace std;
#define MAX_NODE 510
struct ArcNode {
    int vex;
    int len;
    int cost;
    ArcNode(int vex1, int len1, int cost1)
        : vex(vex1)
        , len(len1)
        , cost(cost1){};
};
struct QNode {
    int vex;
    int len;
    QNode(int vex1, int len1)
        : vex(vex1)
        , len(len1){};
};
bool operator<(const QNode& n1, const QNode& n2)
{
    return n1.len > n2.len;
}

int N, M, S, D;
vector<vector<ArcNode> > G(MAX_NODE);
vector<int> visited(MAX_NODE, 0);
vector<int> len(MAX_NODE, 0x3f3f3f3f);
vector<int> cost(MAX_NODE, 0x3f3f3f3f);
vector<int> preNode(MAX_NODE, -1);
int totalCost;
void dijkstra()
{
    priority_queue<QNode> q;
    len[S] = 0;
    cost[S] = 0;
    q.push(QNode(S, 0));
    while (!q.empty()) {
        QNode top = q.top();
        q.pop();
        if (!visited[top.vex]) {
            visited[top.vex] = true;
            for (int i = 0; i < G[top.vex].size(); i++) {
                int adjVex = G[top.vex][i].vex;
                int adjLen = G[top.vex][i].len;
                int adjCost = G[top.vex][i].cost;
                if (!visited[adjVex]) {
                    int newLen = len[top.vex] + adjLen;
                    int newCost = cost[top.vex] + adjCost;
                    if (newLen < len[adjVex]) {
                        len[adjVex] = newLen;
                        cost[adjVex] = newCost;
                        preNode[adjVex] = top.vex;
                        q.push(QNode(adjVex, len[adjVex]));
                    } else if (newLen == len[adjVex]) {
                        if (newCost < cost[adjVex]) {
                            cost[adjVex] = newCost;
                            preNode[adjVex] = top.vex;
                        }
                    }
                }
            }
        }
    }
}
int main(void)
{
    //读取输入
    cin >> N >> M >> S >> D;
    for (int i = 0; i < M; i++) {
        int c1, c2, dis, cost;
        cin >> c1 >> c2 >> dis >> cost;
        G[c1].push_back(ArcNode(c2, dis, cost));
        G[c2].push_back(ArcNode(c1, dis, cost));
    }

    //求解最短路径
    dijkstra();

    //输出结果
    
    stack<int> route;
    int i = D;
    while(i != -1){
        route.push(i);
        i = preNode[i];
    }
    while(!route.empty()){
        cout<<route.top()<<' ';
        route.pop();
    }
    cout << len[D] << ' ' << cost[D] << endl;
}