#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define MAX 0x3f3f3f3f
int N, M;
int G[101][101];
int dis[101][101];
void Floyd()
{
    for (int u = 0; u < N; u++)
        for (int v = 0; v < N; v++) {
            for (int w = 0; w < N; w++) {
                if (G[v][u] + G[u][w] < G[v][w])
                    G[v][w] = G[v][u] + G[u][w];
            }
        }
}
int main(void)
{
    while (cin >> N >> M) {
        //初始化图
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j)
                    G[i][j] = 0;
                else
                    G[i][j] = MAX;
            }
        }

        //录入关系
        for (int i = 0; i < M; i++) {
            int a, b;
            cin >> a >> b;
            G[a][b] = 1;
            G[b][a] = 1;
        }

        //求解连通性
        Floyd();

        //输出结果
        bool isOK = true;
        for (int i = 0; i < N && isOK; i++) {
            for (int j = 0; j < N && isOK; j++) {
                if (G[i][j] > 7) {
                    isOK = false;
                }
            }
        }
        cout << (isOK ? "Yes" : "No") << endl;
    }
    return 0;
}