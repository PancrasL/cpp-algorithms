#include <iostream>
#include <queue>
#include <stack>
#include <stdio.h>
#include <vector>
using namespace std;

struct node {
    int row;
    int col;
    int len;
    node(int row1, int col1, int len1)
        : row(row1)
        , col(col1)
        , len(len1){};
    node(){};
};

struct pos {
    int row;
    int col;
    pos(int row1, int col1)
        : row(row1)
        , col(col1){};
    pos(){};
};

int maze[5][5];
int visited[5][5];
vector<vector<pos> > route(5); //保存节点的前驱节点

int BFS()
{
    queue<node> q;
    q.push(node(0, 0, 0));
    visited[0][0] = 1;
    while (!q.empty()) {
        node front = q.front();
        q.pop();

        if (front.row == 4 && front.col == 4)
            return front.len;
        //上
        if (front.row - 1 >= 0 && maze[front.row - 1][front.col] == 0 && !visited[front.row - 1][front.col]) {
            visited[front.row - 1][front.col] = 1;
            q.push(node(front.row - 1, front.col, front.len + 1));
            route[front.row - 1][front.col] = pos(front.row, front.col);
        }
        //下
        if (front.row + 1 < 5 && maze[front.row + 1][front.col] == 0 && !visited[front.row + 1][front.col]) {
            visited[front.row + 1][front.col] = 1;
            q.push(node(front.row + 1, front.col, front.len + 1));
            route[front.row + 1][front.col] = pos(front.row, front.col);
        }
        //左
        if (front.col - 1 >= 0 && maze[front.row][front.col - 1] == 0 && !visited[front.row][front.col - 1]) {
            visited[front.row][front.col - 1] = 1;
            q.push(node(front.row, front.col - 1, front.len + 1));
            route[front.row][front.col - 1] = pos(front.row, front.col);
        }
        //右
        if (front.col + 1 < 5 && maze[front.row][front.col + 1] == 0 && !visited[front.row][front.col + 1]) {
            visited[front.row][front.col + 1] = 1;
            q.push(node(front.row, front.col + 1, front.len + 1));
            route[front.row][front.col + 1] = pos(front.row, front.col);
        }
    }
    return -1;
}

void printRoute()
{
    stack<pos> st;
    pos p(4, 4);

    st.push(p);
    while (true) {
        p = route[p.row][p.col];
        st.push(p);
        if (p.row == 0 && p.col == 0)
            break;
    }

    while (!st.empty()) {
        printf("(%d, %d)\n", st.top().row, st.top().col);
        st.pop();
    }
}
int main(void)
{
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> maze[i][j];
    for (int i = 0; i < 5; i++)
        route[i].resize(5);
    BFS();
    printRoute();
}