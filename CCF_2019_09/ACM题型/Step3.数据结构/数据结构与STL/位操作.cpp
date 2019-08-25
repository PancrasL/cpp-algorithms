#include <stdio.h>
using namespace std;
int main(void)
{
    int R, X, Y;
    scanf("%x,%d,%d", &R, &X, &Y);

    int maskX = ~(1 << X);
    R &= maskX;

    R |= 1 << Y;
    R |= 1 << (Y - 1);
    R &= ~(1 << (Y - 2));

    printf("%x", R);
}