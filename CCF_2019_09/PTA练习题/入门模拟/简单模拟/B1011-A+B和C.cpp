//注意使用long long类型避免溢出
#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
    long long A, B, C;

    int T;
    cin>>T;
    for (int i = 1; i <= T; i++) {
        cin>>A>>B>>C;
        printf("Case #%d: ", i);
        if (A + B > C) {
            cout << "true" << endl;
        } else
            cout << "false" << endl;
    }
    return 0;
}