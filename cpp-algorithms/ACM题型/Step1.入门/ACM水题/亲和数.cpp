#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define MAX 600000
vector<int> sum(MAX + 1); //计算因子和
void caculate()
{
    sum[1] = 0;
    for (int i = 1; i <= MAX / 2; i++) {
        for (int j = i + i; j <= MAX; j += i) {
            sum[j] += i;
        }
    }
}
int main(void)
{
    caculate();
    int M;
    cin >> M;
    while (M--) {
        int A, B;
        cin >> A >> B;

        if (sum[A] == B && sum[B] == A)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}