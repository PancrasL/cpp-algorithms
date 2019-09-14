//注意格式，位数不足时要补零
#include <iostream>
#include <string>
using namespace std;

string decimalToBase13(int n)
{ //将10进制表示的数n转换为13进制
    string ans;
    int a;
    int b;
    a = n / 13;
    b = n % 13;

    if (a < 10)
        ans.push_back(a + '0');
    else
        ans.push_back(a - 10 + 'A');

    if (b < 10)
        ans.push_back(b + '0');
    else
        ans.push_back(b - 10 + 'A');

    return ans;
}
int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << "#" << decimalToBase13(a) << decimalToBase13(b) << decimalToBase13(c) << endl;

    return 0;
}