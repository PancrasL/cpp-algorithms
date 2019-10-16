#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
string itostr(int n)
{
    char buf[32];
    sprintf(buf, "%d", n);
    return buf;
}
void removeExtraZero(string& s) //移除多余的0
{
    //将0.000、00000、0000.00等形式统一化为0
    int i = 0;
    for (i = 0; i < s.size(); i++) {
        if (s[i] == '.')
            continue;
        if (s[i] != '0')
            break;
    }
    if (i == s.size()) {
        s = "0";
        return;
    }

    //去除前导0
    for (i = 0; i < s.size(); i++) {
        if (s[i] != '0')
            break;
    }

    if (s[i] == '.')
        s = "0" + s.substr(i);
    else
        s = s.substr(i);
    return;
}
string standard(string& s, int N)
{
    removeExtraZero(s);

    //截断至精度位置
    int i;
    int percise = 0;
    for (i = 0; i < s.size(); i++) { //定位到第一个非0数
        if (s[i] != '0' && s[i] != '.')
            break;
    }
    string ans = "0.";
    while (i < s.size()) {
        if (s[i] == '.') {
            i++;
            continue;
        }
        ans.push_back(s[i]);
        i++;
        percise++;
        if (percise == N)
            break;
    }
    if (percise != N) {
        ans.append(N - percise, '0');
    }
    ans.append("*10^");
    int K = 0;
    int index = s.find('.');
    if (index == string::npos) { //形如abc
        if (s == "0")
            K = 0;
        else
            K = s.length();
        ans.append(itostr(K));
    } else if (s[0] == '0') { //形如0.xxx
        for (int i = index + 1; i < s.length(); i++) {
            if (s[i] == '0')
                K++;
            else
                break;
        }
        if (K == 0)
            ans.append("0");
        else
            ans.append("-" + itostr(K));
    } else { //形如xx.xxx
        ans.append(itostr(index));
    }

    return ans;
}
int main(void)
{
    int N;
    string A, B;
    cin >> N >> A >> B;

    string s1 = standard(A, N);
    string s2 = standard(B, N);

    if (s1 == s2)
        cout << "YES " << s1 << endl;
    else
        cout << "NO " << s1 << ' ' << s2 << endl;

    return 0;
}