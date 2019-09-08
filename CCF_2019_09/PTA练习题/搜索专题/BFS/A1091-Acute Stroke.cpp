#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;
struct Pos {
    int x;
    int y;
    int z;
    Pos(int x1, int y1, int z1)
        : x(x1)
        , y(y1)
        , z(z1){};
    Pos(){};
};
int M, N, L, T; //L*N*M的矩阵
int matrix[61][1290][130];
int visited[61][1290][130];
//增量矩阵
int X[] = { 1, -1, 0, 0, 0, 0 };
int Y[] = { 0, 0, 1, -1, 0, 0 };
int Z[] = { 0, 0, 0, 0, 1, -1 };
bool isOK(int x, int y, int z)
{
    if (x < 0 || y < 0 || z < 0)
        return false;
    if (x >= L || y >= N || z >= M)
        return false;
    if (visited[x][y][z] || matrix[x][y][z] == 0)
        return false;
    return true;
}
int BFS(int x, int y, int z)
{
    queue<Pos> q;
    q.push(Pos(x, y, z));
    visited[x][y][z] = 1;
    int ans = 0;
    while (!q.empty()) {
        Pos front = q.front();
        q.pop();
        ans++;
        for (int i = 0; i < 6; i++) {
            int newX = front.x + X[i];
            int newY = front.y + Y[i];
            int newZ = front.z + Z[i];
            if (isOK(newX, newY, newZ) && !visited[newX][newY][newZ] && matrix[newX][newY][newZ] == 1) {
                visited[newX][newY][newZ] = 1;
                q.push(Pos(newX, newY, newZ));
            }
        }
    }
    return ans >= T ? ans : 0;
}
int main(void)
{
    //读取输入
    cin >> N >> M >> L >> T;

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }

    //求解答案
    int ans = 0;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                if (!visited[i][j][k] && matrix[i][j][k] == 1) {
                    ans += BFS(i, j, k);
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}