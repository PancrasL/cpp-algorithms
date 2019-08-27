#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;
#define MAX 51
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
char maze[MAX][MAX][MAX];
char visited[MAX][MAX][MAX];
int A, B, C, T;
int BFS()
{
    queue<node> q;
    q.push(node(0, 0, 0, 0));
    visited[0][0][0] = 1;
    while (!q.empty()) {
        node front = q.front();
        q.pop();
        if (front.time > T) //超时
            return -1;
        if (front.x == A - 1 && front.y == B - 1 && front.z == C - 1) { //到达出口
            return front.time;
        }

        /*向6个方向出发*/
        //上
        if (front.y - 1 >= 0 && maze[front.x][front.y - 1][front.z] == 0 && !visited[front.x][front.y - 1][front.z]) {
            visited[front.x][front.y - 1][front.z] = 1;
            q.push(node(front.x, front.y - 1, front.z, front.time + 1));
        }
        //下
        if (front.y + 1 < B && maze[front.x][front.y + 1][front.z] == 0 && !visited[front.x][front.y + 1][front.z]) {
            visited[front.x][front.y + 1][front.z] = 1;
            q.push(node(front.x, front.y + 1, front.z, front.time + 1));
        }
        //左
        if (front.z - 1 >= 0 && maze[front.x][front.y][front.z - 1] == 0 && !visited[front.x][front.y][front.z - 1]) {
            visited[front.x][front.y][front.z - 1] = 1;
            q.push(node(front.x, front.y, front.z - 1, front.time + 1));
        }
        //右
        if (front.z + 1 < C && maze[front.x][front.y][front.z + 1] == 0 && !visited[front.x][front.y][front.z + 1]) {
            visited[front.x][front.y][front.z + 1] = 1;
            q.push(node(front.x, front.y, front.z + 1, front.time + 1));
        }
        //前
        if (front.x + 1 < A && maze[front.x + 1][front.y][front.z] == 0 && !visited[front.x + 1][front.y][front.z]) {
            visited[front.x + 1][front.y][front.z] = 1;
            q.push(node(front.x + 1, front.y, front.z, front.time + 1));
        }
        //后
        if (front.x - 1 >= 0 && maze[front.x - 1][front.y][front.z] == 0 && !visited[front.x - 1][front.y][front.z]) {
            visited[front.x - 1][front.y][front.z] = 1;
            q.push(node(front.x - 1, front.y, front.z, front.time + 1));
        }
    }
    return -1;
}

int main(void)
{
    int K;
    scanf("%d", &K);

    while (K--) {

        scanf("%d %d %d %d", &A, &B, &C, &T);
        //录入迷宫
        for (int i = 0; i < A; i++) {
            for (int j = 0; j < B; j++) {
                for (int k = 0; k < C; k++) {
                    int temp;
                    scanf("%d", &temp);
                    maze[i][j][k] = temp;
                    visited[i][j][k] = 0;
                }
            }
        }
        cout << BFS() << endl;
    }
    return 0;
}