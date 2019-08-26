#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int N, M;
int main(void)
{
    while (cin >> N >> M) {
        if (N == 0 && M == 0)
            break;
        //录入树
        vector<int> tree(N + 1, -1);
        for (int i = 1; i <= N - 1; i++) {
            int a, b;
            cin >> a >> b;
            tree[b] = a;
        }

        //树上战争
        for (int i = 1; i <= M; i++) {
            int X, Y;
            cin >> X >> Y;
            while (true) {
                X = tree[X];
                Y = tree[Y];
                if (X == -1) {
                    cout << "lxh" << endl;
                    break;
                } else if (Y == -1) {
                    cout << "pfz" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}