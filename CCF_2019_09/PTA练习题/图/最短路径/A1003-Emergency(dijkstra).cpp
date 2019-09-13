#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define MAX_NODE 510
struct ArcNode{
    int v;//邻接点
    int len;//邻接边长度
    ArcNode(int v1, int len1):v(v1), len(len1){};
};

struct QNode{
    int vex;
    int len;
    QNode(int vex1, int len1):vex(vex1), len(len1){};
};
bool operator<(const QNode &n1, const QNode &n2){
        return n1.len>n2.len;
}
int N, M, C1, C2;
vector<vector<ArcNode> > G(MAX_NODE);
vector<int> cityRescues(MAX_NODE);

vector<int> routeNum(MAX_NODE, 0);//从源点到i的最短路径的条数
vector<int> visited(MAX_NODE, 0);//标识节点是否被访问
vector<int> len(MAX_NODE, 0x3f3f3f3f);//源点到i的最短距离
vector<int> num(MAX_NODE, 0);//从源点到i的营救人员的个数
void dijkstra(){
    priority_queue<QNode> q;
    routeNum[C1] = 1;
    len[C1] = 0;
    num[C1] = cityRescues[C1];
    q.push(QNode(C1, 0));
    while(!q.empty()){
        QNode top = q.top();
        q.pop();
        if(!visited[top.vex]){
            visited[top.vex] = 1;
            for(int i=0;i<G[top.vex].size();i++){
                int adjVex = G[top.vex][i].v;
                int adjLen = G[top.vex][i].len;
                if(!visited[adjVex]){
                    int newLen = len[top.vex] + adjLen;
                    int newRescues = num[top.vex] + cityRescues[adjVex];
                    if(newLen < len[adjVex]){
                        len[adjVex] = newLen;
                        routeNum[adjVex] = routeNum[top.vex];
                        num[adjVex] = newRescues;
                        q.push(QNode(adjVex, newLen));
                    }else if(newLen == len[adjVex]){
                        routeNum[adjVex] += routeNum[top.vex];
                        if(newRescues > num[adjVex])
                            num[adjVex] = newRescues;
                    }
                }
            }
        }
    }
}
int main(void){
    cin >>N >>M>>C1>>C2;

    //每个城市的营救人员个数
    for(int i=0;i<N;i++){
        cin>>cityRescues[i];
    }

    //道路信息
    for(int i=0;i<M;i++){
        int c1, c2, L;
        cin>>c1>>c2>>L;
        G[c1].push_back(ArcNode(c2, L));
        G[c2].push_back(ArcNode(c1, L));
    }

    //求解最短路径
    dijkstra();

    cout << routeNum[C2] <<' '<<num[C2]<<endl;
}