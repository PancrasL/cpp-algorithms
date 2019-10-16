#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;
int main(void)
{
    int n, m;
    while (cin >> n >> m) {
        priority_queue<int> que;
        for (int i = 0; i < n; i++) {
            int temp;
            scanf("%d",&temp);
            que.push(temp);
        }
        cout << que.top();
        que.pop();
        m--;
        while (m--) {
            printf(" %d",que.top());
            que.pop();
        }
        cout << endl;
    }
    return 0;
}