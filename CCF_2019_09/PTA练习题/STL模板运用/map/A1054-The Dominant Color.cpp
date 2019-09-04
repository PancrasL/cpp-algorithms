//每次抵消两个不同的元素，最后剩下的一定是超过一半的元素
#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;
int main(void)
{
    int M, N;
    stack<int> colorPool;
    cin >> M >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int color;
            scanf("%d", &color);
            if (colorPool.empty() || (color == colorPool.top())) {
                colorPool.push(color);
            } else {
                colorPool.pop();
            }
        }
    }

    cout << colorPool.top() << endl;

    return 0;
}