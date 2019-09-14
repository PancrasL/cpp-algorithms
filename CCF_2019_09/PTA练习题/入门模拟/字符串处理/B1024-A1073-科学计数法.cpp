//整数部分、小数部分、指数部分分别处理
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string num;
    cin >> num;

    string real; //整数部分
    string decimal; //小数部分
    int exp;

    //提取整数部分
    real = num[1];

    //提取小数部分
    int begin = num.find('.');
    int end = num.find('E');
    decimal = num.substr(begin + 1, end - begin - 1);

    //提取指数部分
    exp = 0;
    for (int i = end + 2; i < num.length(); i++) {
        exp = exp * 10 + num[i] - '0';
    }

    //输出结果
    if (num[0] == '-')
        cout << '-';
    //计算小数点位置
    if (num[end + 1] == '-') { //形如0.xxxx
        cout << "0.";
        for (int i = 0; i < exp - 1; i++)
            cout << 0;
        cout << real << decimal << endl;
    } else {
        int zero = exp - decimal.size();
        if (zero < 0) { //形如xxx.xxxx
            cout << real;
            decimal.insert(decimal.begin() + decimal.size() + zero, '.');
            cout << decimal;
        } else { //形如xxxxxxx
            cout << real << decimal;
            for (int i = 0; i < zero; i++)
                cout << 0;
            cout << endl;
        }
    }
}