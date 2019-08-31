#include <iostream>
#include <string>
using namespace std;
int charToNum(char c)
{
    return c - '0';
}

int mul(char c, int base)
{
    return charToNum(c) * base;
}
int main(void)
{
    string isbn;
    cin >> isbn;

    int rightReg;

    //计算校验和并求模
    rightReg = mul(isbn[0], 1) + mul(isbn[2], 2) + mul(isbn[3], 3) + mul(isbn[4], 4) + mul(isbn[6], 5) + mul(isbn[7], 6) + mul(isbn[8], 7) + mul(isbn[9], 8) + mul(isbn[10], 9);
    rightReg %= 11;

    //计算校验码
    char verify;
    if (rightReg == 10)
        verify = 'X';
    else
        verify = rightReg + '0';


    //输出结果
    if (isbn[12] == verify) {
        cout << "Right" << endl;
    } else {
        isbn[12] = verify;
        cout << isbn << endl;
    }

    return 0;
}