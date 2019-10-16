//当B的长度小于A时需要补0进行运算
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string A, B;
    cin >> A >> B;

    int lenA = A.length();
    int lenB = B.length();
    if (lenB < lenA) {
        string s(lenA - lenB, '0');
        B = s + B;
        lenB = B.length();
    }

    for (int i = 1; i <= lenA; i++) {
        if (i % 2 == 1) { //奇数位
            int num = (B[lenB - i] - '0' + A[lenA - i] - '0') % 13;
            if (num < 10)
                B[lenB - i] = num + '0';
            else if (num == 10)
                B[lenB - i] = 'J';
            else if (num == 11)
                B[lenB - i] = 'Q';
            else if (num == 12)
                B[lenB - i] = 'K';
        } else { //偶数位
            int num = B[lenB - i] - A[lenA - i];
            if (num < 0)
                num += 10;
            B[lenB - i] = num + '0';
        }
    }

    cout << B << endl;

    return 0;
}
