//字典序比较时大于号写成了小于号
#include <iostream>
#include <map>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;
void toLowerStr(string& s)
{
    int len = s.size();
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }
}
bool isSplitChar(char c)
{
    if (c >= 'A' && c <= 'Z')
        return false;
    if (c >= 'a' && c <= 'z')
        return false;
    if (c >= '0' && c <= '9')
        return false;
    return true;
}

int main(void)
{
    //读取输入
    string line;
    getline(cin, line);
    int len = line.size();

    //将分隔符转换为空格
    for (int i = 0; i < len; i++) {
        if (isSplitChar(line[i])) {
            line[i] = ' ';
        }
    }

    //处理输入
    map<string, int> word;
    istringstream inStr(line);
    string s;
    while(inStr>>s){
        toLowerStr(s);
        word[s]++;
    }
    
    //统计出现次数最多的单词
    map<string, int>::iterator it = word.begin();
    int maxCnt = 0;
    string ans;
    while (it != word.end()) {
        if (it->second > maxCnt) {
            maxCnt = it->second;
            ans = it->first;
        } else if (it->second == maxCnt && (ans > it->first)) {
            ans = it->first;
        }
        it++;
    }

    cout << ans << ' ' << maxCnt << endl;

    return 0;
}