#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
#define MAX 51
unsigned long long ans[MAX];
void getAns()
{
    ans[0] = 0;
    ans[1] = 1;
    ans[2] = 2;
    for (int i = 3; i < MAX; i++)
        ans[i] = ans[i - 2] + ans[i - 1];
}
int main(void)
{
    getAns();
    int n;
    while (cin >> n) {
        cout << ans[n] <<endl;
    }
    return 0;
}