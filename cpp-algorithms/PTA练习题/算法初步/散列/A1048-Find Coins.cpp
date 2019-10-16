#include <iostream>
using namespace std;
int money[10010];
int main(void)
{
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num <= 1000)
            money[num]++;
    }
    int i;
    for (i = 1; i < M; i++) {
        if (money[i] && money[M - i])
            break;
    }
    if (i == M || (i == M - i && money[i] == 1))
        cout << "No Solution" << endl;
    else
        cout << i << ' ' << M - i << endl;

    return 0;
}