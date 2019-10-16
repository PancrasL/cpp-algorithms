#include <iostream>
#include <queue>
using namespace std;
struct node {
    int x;
    int y;
    int z;
    int time;
    node(){};
    node(int x1, int y1, int z1, int time1)
        : x(x1)
        , y(y1)
        , z(z1)
        , time(time1){};
};
char maze[2][10][10];
int visited[2][10][10];
int N, M, T;
bool isOkAfterTrans(int x, int y, int z)
{
    return maze[x][y][z] != '#' && maze[x][y][z] != '*';
}
int BFS(node start, node end)
{
    queue<node> que;
    que.push(start);
    visited[start.x][start.y][start.z] = 1;
    while (!que.empty()) {
        node front = que.front();
        que.pop();
        if (front.time > T)
            return 0;
        if (front.x == end.x && front.y == end.y && front.z == end.z) {
            return 1;
        }
        //上
        if (front.y - 1 >= 0 && !visited[front.x][front.y - 1][front.z] && maze[front.x][front.y - 1][front.z] != '*') {
            visited[front.x][front.y - 1][front.z] = 1;
            if (maze[front.x][front.y - 1][front.z] == '#') { //该位置是传送门
                if (isOkAfterTrans(!front.x, front.y - 1, front.z)) { //传送后是路
                    visited[!front.x][front.y - 1][front.z] = 1;
                    que.push(node(!front.x, front.y - 1, front.z, front.time + 1));
                }
            } else {
                que.push(node(front.x, front.y - 1, front.z, front.time + 1));
            }
        }
        //下
        if (front.y + 1 < N && !visited[front.x][front.y + 1][front.z] && maze[front.x][front.y + 1][front.z] != '*') {
            visited[front.x][front.y + 1][front.z] = 1;
            if (maze[front.x][front.y + 1][front.z] == '#') { //该位置是传送门
                if (isOkAfterTrans(!front.x, front.y + 1, front.z)) { //传送后是路
                    visited[!front.x][front.y + 1][front.z] = 1;
                    que.push(node(!front.x, front.y + 1, front.z, front.time + 1));
                }
            } else {
                que.push(node(front.x, front.y + 1, front.z, front.time + 1));
            }
        }
        //左
        if (front.z - 1 >= 0 && !visited[front.x][front.y][front.z - 1] && maze[front.x][front.y][front.z - 1] != '*') {
            visited[front.x][front.y][front.z - 1] = 1;
            if (maze[front.x][front.y][front.z - 1] == '#') { //该位置是传送门
                if (isOkAfterTrans(!front.x, front.y, front.z - 1)) { //传送后是路
                    visited[!front.x][front.y][front.z - 1] = 1;
                    que.push(node(!front.x, front.y, front.z - 1, front.time + 1));
                }
            } else {
                que.push(node(front.x, front.y, front.z - 1, front.time + 1));
            }
        }
        //右
        if (front.z + 1 < M && !visited[front.x][front.y][front.z + 1] && maze[front.x][front.y][front.z + 1] != '*') {
            visited[front.x][front.y][front.z + 1] = 1;
            if (maze[front.x][front.y][front.z + 1] == '#') { //该位置是传送门
                if (isOkAfterTrans(!front.x, front.y, front.z + 1)) { //传送后是路
                    visited[!front.x][front.y][front.z + 1] = 1;
                    que.push(node(!front.x, front.y, front.z + 1, front.time + 1));
                }
            } else {
                que.push(node(front.x, front.y, front.z + 1, front.time + 1));
            }
        }
    }
    return 0;
}
int main(void)
{
    int C;
    cin >> C;
    while (C--) {
        //读取迷宫
        cin >> N >> M >> T;
        node start, end;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < N; j++)
                for (int k = 0; k < M; k++) {
                    cin >> maze[i][j][k];
                    visited[i][j][k] = 0;
                    if (maze[i][j][k] == 'S') //公主位置
                        start = node(i, j, k, 0);
                    if (maze[i][j][k] == 'P') //出口位置
                        end = node(i, j, k, 0);
                }
        //求解答案
        if (BFS(start, end))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}