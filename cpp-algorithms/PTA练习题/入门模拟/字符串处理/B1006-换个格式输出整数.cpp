#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;

    int a, b, c;
    //百位
    a = n / 100;
    n %= 100;
    //十位
    b = n / 10;
    //个位
    c = n % 10;

    for (int i = 0; i < a; i++)
        putchar('B');
    for (int i = 0; i < b; i++)
        putchar('S');

    for (int i = 1; i <= c; i++)
        putchar('0' + i);

    putchar('\n');

    return 0;
}