#include <iostream>
#include <queue>
#include <stack>
#include <vector>
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

int N, M, S, D;
vector<vector<ArcNode> > G(MAX_NODE);

vector<int> len(MAX_NODE, 0x3f3f3f3f);
vector<int> cost(MAX_NODE, 0x3f3f3f3f);
vector<int> preNode(MAX_NODE, -1);
vector<int> visited(MAX_NODE);

int totalCost;
void relax(int a, int b, int arcLen, int arcCost, queue<int>& q)
{
    int newLen = len[a] + arcLen;
    int newCost = cost[a] + arcCost;
    if (newLen < len[b]) {
        //更新长度
        len[b] = newLen;
        //更新花费
        cost[b] = newCost;
        //更新路线
        preNode[b] = a;
        //入队
        if (!visited[b]) {
            q.push(b);
            visited[b] = true;
        }
    } else if (newLen == len[b]) {
        if (newCost < cost[b]) {
            //更新花费
            cost[b] = newCost;
            //更新路线
            preNode[b] = a;
            //入队
            if (!visited[b]) {
                q.push(b);
                visited[b] = true;
            }
        }
    }
}
void SPFA()
{
    //初始化
    len[S] = 0;
    cost[S] = 0;

    //求解
    queue<int> q;
    q.push(S);
    visited[S] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        visited[v] = false;

        for (int i = 0; i < G[v].size(); i++) {
            relax(v, G[v][i].vex, G[v][i].len, G[v][i].cost, q);
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
    SPFA();

    //输出结果

    stack<int> route;
    int i = D;
    while (i != -1) {
        route.push(i);
        i = preNode[i];
    }
    while (!route.empty()) {
        cout << route.top() << ' ';
        route.pop();
    }
    cout << len[D] << ' ' << cost[D] << endl;
}