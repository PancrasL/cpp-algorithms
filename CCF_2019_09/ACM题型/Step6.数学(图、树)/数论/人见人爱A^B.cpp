#include <iostream>
using namespace std;
//求出(a^b)%mod
unsigned long long powermod(unsigned long long a, unsigned long long b, unsigned long long mod)
{
    unsigned long long sum = 1;
    while (b) {
        if (b & 1) //b是奇数
        {
            sum = (sum * a) % mod;
        }
        b /= 2;
        a = (a * a) % mod;
    }
    return sum;
}

int main(void)
{
    int A, B;
    while (cin >> A >> B) {
        if (A == 0 && B == 0)
            break;
        cout << powermod(A, B, 1000) << endl;
    }
    return 0;
}