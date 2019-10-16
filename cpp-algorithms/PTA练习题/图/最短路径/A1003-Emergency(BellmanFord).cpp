#include <queue>
#include <set>
#include <vector>
#include <iostream>
using namespace std;
#define MAX_NODE 510
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
void relax(int a, int b, int c)
{
    int newLen = len[a] + c;//源点经由a到达b的距离
    int newRescues = totalRescues[a] + cityRescues[b];//源点经由a到达b的营救人员的个数
    if (newLen < len[b]) {
        //更新距离
        len[b] = newLen;
        //更新路径数
        preNode[b].clear();
        preNode[b].insert(a);
        routeNum[b] = routeNum[a];
        //更新营救人员个数
        totalRescues[b] = newRescues;
    }else if(newLen == len[b]){
        //更新路径数
        preNode[b].insert(a);
        routeNum[b] = 0;
        for(set<int>::iterator it = preNode[b].begin();it!=preNode[b].end();it++){
            routeNum[b] += routeNum[*it];
        }
        //更新营救人员的个数
        if(newRescues > totalRescues[b]){
            totalRescues[b] = newRescues;
        }
    }
}
void bellmanFord()
{
    //初始化
    len[C1] = 0;
    routeNum[C1] = 1;
    totalRescues[C1] = cityRescues[C1];

    //对每条边执行N-1次松弛操作
    for (int i = 0; i < N - 1; i++) { 
        for (int v = 0; v < N; v++) { //对于所有的边执行松弛操作
            for (int k = 0; k < G[v].size(); k++) {
                relax(v, G[v][k].v, G[v][k].len);
            }
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
    bellmanFord();

    cout << routeNum[C2] << ' ' << totalRescues[C2] << endl;
}