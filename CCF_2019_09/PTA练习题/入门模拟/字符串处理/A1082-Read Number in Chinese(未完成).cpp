#include <iostream>
#include <string>
#include <vector>
using namespace std;
const char* mp[] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
const char* base[] = { "", "Shi", "Bai", "Qian", "Wan", "Shi", "Bai", "Qian", "Yi", "Shi" };
int main(void)
{
    vector<string> ans;

    //读入数字
    string num;
    cin >> num;

    //处理符号问题、算出最高位
    int baseIndex;
    int begin;
    if (num[0] == '-') {
        ans.push_back("Fu");
        begin = 1;
        baseIndex = num.size() - 2;
    } else {
        begin = 0;
        baseIndex = num.size() - 1;
    }

    //计算答案
    int last = 1;
    bool flag = false;
    if (num == "0" || num == "-0") {
        ans.push_back("ling");
    }
    while (begin < num.size()) {
        //计算出应该输出的数字
        int temp = num[begin++] - '0';

        if (temp == 0) { //数字为0
            if (flag && (baseIndex == 4 || baseIndex == 8)) {
                flag = false;
                ans.push_back(base[baseIndex]);
                last = 1;
            } else
                last = 0;
        } else {
            if (last == 0)
                ans.push_back("ling");
            if (baseIndex != 8)
                flag = true;
            ans.push_back(mp[temp]);
            ans.push_back(base[baseIndex]);
            last = 1;
        }
        baseIndex--;
    }

    //输出结果
    cout << ans[0];
    for (int i = 1; i < ans.size(); i++)
        cout << ' ' << ans[i];

    return 0;
}