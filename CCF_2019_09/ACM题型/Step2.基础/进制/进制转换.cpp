#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;
int main(void)
{
    int N, R;
    while (cin >> N >> R) {
        stack<char> ans;
        bool flag = 0;
        if (N < 0) {
            flag = 1;
            N = -N;
        }
        while (N) {
            int remain = N % R;
            N /= R;
            if (remain < 10)
                ans.push(remain + '0');
            else
                ans.push(remain - 10 + 'A');
        }
        if (flag)
            putchar('-');
        while (!ans.empty()) {
            putchar(ans.top());
            ans.pop();
        }
        cout << endl;
    }
    return 0;
}