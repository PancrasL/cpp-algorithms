#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string A, B;
    int DA, DB;
    cin >> A >> DA >> B >> DB;

    long long PA, PB;
    PA = PB = 0;
    //统计A中DA的个数
    int cnt = 0;
    for (int i = 0; i < A.length(); i++) {
        if (A[i] - '0' == DA)
            cnt++;
    }
    while (cnt--) { //计算PA
        PA = PA * 10 + DA;
    }
    //统计B中DB的个数
    cnt = 0;
    for (int i = 0; i < B.length(); i++) {
        if (B[i] - '0' == DB)
            cnt++;
    }
    while (cnt--) { //计算PB
        PB = PB * 10 + DB;
    }

    //输出结果
    cout << PA + PB << endl;

    return 0;
}