#include <iostream>
#include <vector>
using namespace std;
int n;
int visited[11];

vector<int> queenAns(11, -1);
bool isOK(int row, int col)
{
    for (int i = row - 1; i >= 0; i--) {
        if (visited[i] == col || row - i == col - visited[i] || row - i == visited[i] - col) //同一列或同一对角线
            return false;
    }
    return true;
}

int DFS(int row, int queens)
{
    if (row == queens)
        return 1;
    int ans = 0;
    for (int i = 0; i < queens; i++) {
        if (isOK(row, i)) {
            visited[row] = i;
            ans += DFS(row + 1, queens);
        }
    }
    return ans;
}
int main(void)
{
    while (cin >> n) {
        if (queenAns[n] != -1) { //已经求过该情况
            cout << queenAns[n] << endl;
        } else { //未求过该情况
            if (n == 0)
                break;
            for (int i = 0; i < n; i++) {
                visited[i] = -1;
            }
            queenAns[n] = DFS(0, n);
            cout << queenAns[n] << endl;
        }
    }
    return 0;
}