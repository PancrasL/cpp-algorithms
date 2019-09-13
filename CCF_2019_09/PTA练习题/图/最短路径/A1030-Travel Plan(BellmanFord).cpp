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

int N, M, S, D;
vector<vector<ArcNode> > G(MAX_NODE);

vector<int> len(MAX_NODE, 0x3f3f3f3f);
vector<int> cost(MAX_NODE, 0x3f3f3f3f);
vector<int> preNode(MAX_NODE, -1);
int totalCost;
void relax(int a, int b, int arcLen, int arcCost){
    int newLen = len[a] + arcLen;
    int newCost = cost[a] + arcCost;
    if(newLen < len[b]){
        //更新长度
        len[b] = newLen;
        //更新花费
        cost[b] = newCost;
        //更新路线
        preNode[b] = a;
    } else if(newLen == len[b]){
        if(newCost < cost[b]){
            //更新花费
            cost[b] = newCost;
            //更新路线
            preNode[b] = a;
        }
    }
}
void bellmanFord(){
    //初始化
    len[S] = 0;
    cost[S] = 0;
    
    //N-1次松弛操作
    for(int i=0;i<N-1;i++){
        for(int v = 0;v<N;v++){
            for(int k=0;k<G[v].size();k++){
                relax(v, G[v][k].vex, G[v][k].len, G[v][k].cost);
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
    bellmanFord();

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