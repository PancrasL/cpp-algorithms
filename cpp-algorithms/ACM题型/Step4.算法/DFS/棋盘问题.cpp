#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

char matrix[9][9];
int visited[9];
int n, k;

//判断row行col列能否摆放棋子
bool isOK(int row, int col)
{
    for (int i = 0; i <= row - 1; i++)
        if (visited[i] == col)
            return false;
    return true;
}

//DFS求解棋子摆放
int DFS(int row, int k)
{
    if (k == 0)
        return 1;
    int ans = 0;
    for (int i = row; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == '#' && isOK(i, j)) {
                visited[i] = j;
                ans += DFS(i + 1, k - 1);
                visited[i] = -1;
            }
        }
    }
    return ans;
}
int main(void)
{
    while (cin >> n >> k) {
        if (n == -1 && k == -1)
            break;

        //清空visit
        for (int i = 0; i < n; i++)
            visited[i] = -1;

        //录入棋盘
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> matrix[i][j];

        //输出结果
        cout << DFS(0, k) << endl;
    }
}