#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
    int P1, P2, P3;
    int A1, A2, A3;

    scanf("%d.%d.%d", &P1, &P2, &P3);
    scanf("%d.%d.%d", &A1, &A2, &A3);

    int sum1, sum2;
    sum1 = (P1 * 17 + P2) * 29 + P3;
    sum2 = (A1 * 17 + A2) * 29 + A3;

    int charge = sum2 - sum1;
    if (charge < 0) {
        cout << "-";
        charge = -charge;
    }

    int C1, C2, C3;
    C1 = charge % 29;
    charge /= 29;
    C2 = charge % 17;
    charge /= 17;
    C3 = charge;
    printf("%d.%d.%d\n", C3, C2, C1);

    return 0;
}