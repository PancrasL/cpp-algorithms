#include <algorithm>
#include <iostream>
#include <memory.h>
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
const int MAX_NODE = 10010;
const int INF = 0x3f3f3f3f;
struct ArcNode {
    int vex;
    int len;
    ArcNode(int vex1, int len1)
        : vex(vex1)
        , len(len1){};
};
struct QNode{
    int vex;
    int dis;
    QNode(int vex1, int dis1):vex(vex1), dis(dis1){};
};
bool operator<(const QNode &n1, const QNode &n2){
    return n1.dis > n2.dis;
}
int n, m, k;
vector<int> engine; //行星发动机
vector<vector<ArcNode> > G(MAX_NODE);
vector<int> nodeType(MAX_NODE, 0); //0表示普通据点，1表示行星发动机
vector<int> dis[MAX_NODE];
vector<int> visited;
void relax(int s, int u, int v, int len, priority_queue<QNode> &q){
    if(dis[s][u] + len < dis[s][v]){
        dis[s][v] = dis[s][u] + len;
        if(!visited[v]){
            q.push(QNode(v, dis[s][v]));
            visited[v] = true;
        }
    }
}
void SPFA(int s)
{
    //初始化
    dis[s].assign(n + 1, INF);
    visited.assign(n+1, 0);
    dis[s][s] = 0;

    //求解
    priority_queue<QNode> q;
    q.push(QNode(s, 0));
    visited[s] = true;
    while(!q.empty()){
        QNode u = q.top();
        q.pop();
        visited[u.vex] = false;
        for(int i=0;i<G[u.vex].size();i++){
            relax(s, u.vex, G[u.vex][i].vex, G[u.vex][i].len, q);
        }
    }
}
int getDistanceSum(int s)
{
    vector<int> disToEngine;
    int engineNum = engine.size();
    for (int i = 0; i < engineNum; i++) {
        if (dis[engine[i]][s] != INF) {
            disToEngine.push_back(dis[engine[i]][s]);
        }
    }
    sort(disToEngine.begin(), disToEngine.end());

    int ans = 0;
    for (int i = 0; i < k && i < disToEngine.size(); i++) {
        ans += disToEngine[i];
    }
    return ans;
}
int main(void)
{
    scanf("%d %d %d", &n, &m, &k);
    //读取节点类型
    for (int i = 1; i <= n; i++) {
        scanf("%d", &nodeType[i]);
        if (nodeType[i] == 1)
            engine.push_back(i);
    }
    //读取图
    for (int i = 0; i < m; i++) {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        G[u].push_back(ArcNode(v, w));
        G[v].push_back(ArcNode(u, w));
    }
    //求解最短路径
    int len = engine.size();
    for (int i = 0; i < len; i++) {
        SPFA(engine[i]);
    }
    //求解路径和
    for (int i = 1; i <= n; i++) {
            cout << getDistanceSum(i) <<endl;
    }
}