#include <iostream>
#include <stdio.h>
using namespace std;
double A[1001]; //多项式A
double B[1001]; //多项式B
int main(void)
{
    int K;
    cin >> K;
    while (K--) {
        int a;
        double b;
        cin >> a >> b;
        A[a] = b;
    }
    cin >> K;
    while (K--) {
        int a;
        double b;
        cin >> a >> b;
        B[a] = b;
    }

    int cnt = 0;
    for (int i = 1000; i >= 0; i--) {
        A[i] += B[i];
        if (A[i] != 0)
            cnt++;
    }

    cout << cnt;
    for (int i = 1000; i >= 0; i--) {
        if (A[i] != 0) {
            printf(" %d %.1f", i, A[i]);
        }
    }
    cout << endl;

    return 0;
}