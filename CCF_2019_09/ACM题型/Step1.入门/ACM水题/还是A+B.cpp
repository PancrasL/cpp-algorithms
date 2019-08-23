#include <iostream>
using namespace std;
int mod[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000 };
int main(void)
{
    int A, B, K;
    while (cin >> A >> B >> K) {
        if (A == 0 && B == 0) {
            break;
        }
        if (A % mod[K] == B % mod[K])
            cout << -1 << endl;
        else
            cout << A + B << endl;
    }
    return 0;
}