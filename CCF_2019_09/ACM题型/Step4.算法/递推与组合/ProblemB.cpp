#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
#define MAX 200
vector<int> ans(MAX + 1);
void getAns()
{
    ans[1] = 1;
    ans[2] = 2;
    for (int i = 3; i <= MAX; i++)
        ans[i] = ans[i - 1] + ans[i - 2];
}
int main(void)
{
    getAns();
    int n;
    while (cin >> n) {
        printf("%d\n", ans[n]);
    }
    return 0;
}