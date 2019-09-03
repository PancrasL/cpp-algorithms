#include <algorithm>
#include <ctype.h>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
const char* week[] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
bool valid(char c)
{
    if (c >= '0' && c <= '9')
        return true;
    if (c >= 'A' && c <= 'N')
        return true;
    return false;
}

int main(void)
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    //寻找第一对相同的大写字符
    int len = min(s1.length(), s2.length());
    int i;
    for (i = 0; i < len; i++) {
        if ((s1[i] >= 'A' && s1[i] <= 'G') && s1[i] == s2[i])
            break;
    }
    cout << week[s1[i] - 'A'] << ' ';

    //继续寻找第二对相同的字符
    i++;
    while (i < len) {
        if (valid(s1[i]) && s1[i] == s2[i])
            break;
        i++;
    }
    if (isdigit(s1[i])) {
        printf("%02d:", s1[i] - '0');
    } else {
        printf("%02d:", s1[i] - 'A' + 10);
    }

    //寻找s3和s4第一个相同字符的位置
    i = 0;
    len = min(s3.size(), s4.size());
    for (i = 0; i < len; i++) {
        if (isalpha(s3[i]) && (s3[i] == s4[i]))
            break;
    }
    printf("%02d", i);

    return 0;
}