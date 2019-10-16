#include <iostream>
#include <queue>
#include <set>
#include <vector>
using namespace std;
const int MAX_NODE = 510;
struct ArcNode {
    int v; //邻接点
    int len; //邻接边长度
    ArcNode(int v1, int len1)
        : v(v1)
        , len(len1){};
};

int N, M, C1, C2;
vector<vector<ArcNode> > G(MAX_NODE);
vector<int> cityRescues(MAX_NODE); //城市i的营救人员个数

vector<int> routeNum(MAX_NODE, 0); //从源点到i的最短路径的条数
vector<int> len(MAX_NODE, 0x3f3f3f3f); //源点到i的最短距离
vector<int> totalRescues(MAX_NODE, 0); //从源点到i的营救人员的个数
set<int> preNode[MAX_NODE];
vector<int> visited(MAX_NODE, 0); //标识节点是否在队列中
void relax(int v, int u, int arcLen, queue<int>& q)
{
    int newLen = len[v] + arcLen; //源点经由a到达b的距离
    int newRescues = totalRescues[v] + cityRescues[u]; //源点经由a到达b的营救人员的个数
    if (len[u] > len[v] + arcLen) {
        //更新距离
        len[u] = len[v] + arcLen;
        //更新路径数
        preNode[u].clear();
        preNode[u].insert(v);
        routeNum[u] = routeNum[v];
        //更新营救人员个数
        totalRescues[u] = cityRescues[u] + totalRescues[v];
        //入队
        if (!visited[u]) {
            q.push(u);
            visited[u] = 1;
        }
    } else if (len[u] == arcLen + len[v]) {
        //更新路径数
        preNode[u].insert(v);
        routeNum[u] = 0;
        for (set<int>::iterator it = preNode[u].begin(); it != preNode[u].end(); it++) {
            routeNum[u] += routeNum[*it];
        }
        //更新营救人员的个数
        if (totalRescues[u] < totalRescues[v] + cityRescues[u]) {
            totalRescues[u] = totalRescues[v] + cityRescues[u];
        }
        //入队
        if (!visited[u]) {
            q.push(u);
            visited[u] = true;
        }
    }
}

void SPFA()
{
    //初始化
    totalRescues[C1] = cityRescues[C1];
    len[C1] = 0;
    routeNum[C1] = 1;
    
    queue<int> q;
    q.push(C1);
    visited[C1] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        visited[v] = false;
        for (int i = 0; i < G[v].size(); i++) {
           relax(v, G[v][i].v, G[v][i].len, q);
        }
    }
}
int main(void)
{
    cin >> N >> M >> C1 >> C2;

    //每个城市的营救人员个数
    for (int i = 0; i < N; i++) {
        cin >> cityRescues[i];
    }

    //道路信息
    for (int i = 0; i < M; i++) {
        int c1, c2, L;
        cin >> c1 >> c2 >> L;
        G[c1].push_back(ArcNode(c2, L));
        G[c2].push_back(ArcNode(c1, L));
    }

    //求解最短路径
    SPFA();

    cout << routeNum[C2] << ' ' << totalRescues[C2] << endl;
}