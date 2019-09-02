#include <iostream>
#include <stdio.h>
using namespace std;
char c;
void printLine(int wide, int num)
{
    int space = wide - num;
    for (int i = 0; i < space / 2; i++)
        putchar(' ');
    for (int i = 0; i < num; i++)
        putchar(c);
    cout << endl;
}
int main(void)
{
    int N;
    cin >> N >> c;
    int num = 3;
    int sum = 1;
    int cnt = 0;
    while (true) {
        if (sum + 2 * num > N)
            break;
        sum += 2 * num;
        num += 2;
        cnt++;
    }
    num -= 2;

    int wide = num;
    for (int i = 0; i < cnt; i++) {
        printLine(wide, num);
        num -= 2;
    }
    for (int i = 0; i <= cnt; i++) {
        printLine(wide, num);
        num += 2;
    }

    cout << N - sum << endl;

    return 0;
}