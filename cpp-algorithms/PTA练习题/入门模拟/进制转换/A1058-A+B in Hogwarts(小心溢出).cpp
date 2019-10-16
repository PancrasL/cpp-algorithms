#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
    long long P1, P2, P3;
    long long A1, A2, A3;

    scanf("%lld.%lld.%lld", &P1, &P2, &P3);
    scanf("%lld.%lld.%lld", &A1, &A2, &A3);

    long long sum1, sum2;
    sum1 = (P1 * 17 + P2) * 29 + P3;
    sum2 = (A1 * 17 + A2) * 29 + A3;

    long long charge = sum2 + sum1;

    long long C1, C2, C3;
    C1 = charge % 29;
    charge /= 29;
    C2 = charge % 17;
    charge /= 17;
    C3 = charge;
    printf("%lld.%lld.%lld\n", C3, C2, C1);

    return 0;
}