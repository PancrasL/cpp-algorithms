#include <iostream>
using namespace std;
//非递归法计算最大公约数
int gcd(int m, int n)
{
    for (;;) {
        if (n == 0)
            return m;
        int temp = m % n;
        m = n;
        n = temp;
    }
}
int main(void)
{
    int T;
    cin >> T;
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = b * d;
        int y = gcd(b, d); //最大公约数
        int z = x / y; //最小公倍数

        //通分
        a = a * (z / b);
        c = c * (z / d);

        //分子合并
        a += c;

        //约分并输出结果
        int temp = gcd(a, z);
        cout << a / temp << ' ' << z / temp << endl;
    }
    return 0;
}