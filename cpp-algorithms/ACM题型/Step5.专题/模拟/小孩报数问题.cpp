#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
vector<string> que;
int main(void)
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        que.push_back(name);
    }
    int W, S;
    scanf("%d,%d", &W, &S);

    int index = W - 1;
    int cnt = 0;
    while (true) {
        if (++cnt == S) {
            cout << que[index] << endl;
            que.erase(que.begin() + index);
            if (que.empty())
                break;
            index %= que.size();
            cnt = 0;
        } else {
            index = (index + 1) % que.size();
        }
    }
    return 0;
}