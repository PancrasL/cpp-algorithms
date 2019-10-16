#include <iostream>
#include <set>
#include <stdio.h>
#include <string>
using namespace std;
set<char> broken; //坏键

char upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c;
}

int main(void)
{
    string errorKey;
    string input;
    getline(cin, errorKey);
    getline(cin, input);

    bool shiftBroken = false;
    for (int i = 0; i < errorKey.size(); i++) {
        if (errorKey[i] == '+')
            shiftBroken = true;
        else {
            broken.insert(errorKey[i]);
            if(errorKey[i]>='A'&&errorKey[i]<='Z')
                broken.insert(errorKey[i] - 'A' + 'a');
        }
    }

    int len = input.length();
    for (int i = 0; i < len; i++) {
        if (shiftBroken) { //shift键坏掉
            if (input[i] >= 'A' && input[i] <= 'Z') //不能输出大写字母
                continue;
            if (broken.count(input[i]) != 0) //不能输出坏键
                continue;
            putchar(input[i]);
        } else {
            if (broken.count(input[i]) != 0) //不能输出坏键
                continue;
            putchar(input[i]);
        }
    }
    cout << endl;

    return 0;
}