//http://codeup.cn/problem.php?cid=100000624&pid=0
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
const int MAX_NODE = 257;
const int INF = 0x3f3f3f3f;
struct ArcNode {
    int vex;
    int len;
    ArcNode(int vex1, int len1)
        : vex(vex1)
        , len(len1){};
};
int x, y; //顶点数、边数
vector<int> node(26); //顶点集
vector<int> dp; //dp[i]表示从i出发的最长路径
int G[260][260];
vector<int> choice(MAX_NODE, -1);
int DP(int vex)
{
    if (dp[vex] > 0) //dp[vex]已经计算得到
        return dp[vex];
    for (int i = 0; i < x; i++) {
        int id = node[i];
        if (G[vex][id] != INF) {
            int newLen = DP(id) + G[vex][id];
            if (newLen > dp[vex]) {
                dp[vex] = newLen;
                choice[vex] = id;
            }
        }
    }
    return dp[vex];
}
void printPath(int vex)
{
    int len = 0;
    bool first = true;
    while (choice[vex] != -1) {
        if(!first)
            printf("(%c,%c) ", vex, choice[vex]);
        first = false;
        len += G[vex][choice[vex]];
        vex = choice[vex];
    }
    cout<<len<<endl;
}
int main(void)
{
    int n;
    cin >> n;
    while (n--) {

        //初始化
        for (int i = 0; i < MAX_NODE; i++) {
            for (int j = 0; j < MAX_NODE; j++) {
                G[i][j] = 0x3f3f3f3f;
            }
        }
        choice.assign(MAX_NODE, -1);
        dp.assign(MAX_NODE, 0);
        vector<int> inDegree(MAX_NODE, 0);

        cin >> x >> y;
        //读取顶点集
        for (int i = 0; i < x; i++) {
            char c;
            cin>>c;
            node[i] = c;
        }
        //读取图
        for (int i = 0; i < y; i++) {
            char a, b;
            int c;
            cin>>a>>b>>c;
            G[a][b] = c;
            inDegree[b]++;
        }
        //创建超级源点
        int superSrc = 1;
        for (int i = 0; i < x; i++) {
            if (inDegree[node[i]] == 0) {
                G[superSrc][node[i]] = 0;
            }
        }
        //求解最长路
        DP(superSrc);

        //输出结果
        printPath(superSrc);
    }
}