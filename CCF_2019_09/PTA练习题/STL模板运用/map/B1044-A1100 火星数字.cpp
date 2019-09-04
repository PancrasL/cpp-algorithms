//格式错误：多输出了一个空格！！！
#include <iostream>
#include <map>
#include <sstream>
#include <stdio.h>
#include <string>
using namespace std;
const char* marsGeWei[] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
const char* marsShiWei[] = { "tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
//判断s是否为火星数字
bool isMarsNum(const string& s)
{
    if(s[0]>='0'&&s[0]<='9')
        return false;
    return true;
}
int main(void)
{
    //建立火星文到地球文的映射
    map<string, int> marsToEarth;
    for (int i = 0; i < 13; i++) {
        marsToEarth[marsGeWei[i]] = i;
        marsToEarth[marsShiWei[i]] = i * 13;
    }

    //处理输入
    int N;
    cin >> N;
    getchar();
    string line;
    for (int i = 0; i < N; i++) {
        getline(cin, line);
        //火星文-》地球文
        if (isMarsNum(line)) {
            istringstream inStr(line);
            string s;
            int ans = 0;
            while (inStr >> s) {
                ans += marsToEarth[s];
            }
            cout << ans << endl;
        }
        //地球文-》火星文
        else {
            istringstream inStr(line);
            int num;
            inStr >> num;
            int shiwei, gewei;
            shiwei = num / 13;
            gewei = num % 13;
            if (shiwei == 0 && gewei == 0) {
                cout << marsGeWei[0] << endl;
            } else if (shiwei != 0 && gewei == 0)
                cout << marsShiWei[shiwei] << endl;
            else if (shiwei != 0 && gewei != 0)
                cout << marsShiWei[shiwei] << ' ' << marsGeWei[gewei] << endl;
            else {
                cout << marsGeWei[gewei] << endl;
            }
        }
    }
    return 0;
}