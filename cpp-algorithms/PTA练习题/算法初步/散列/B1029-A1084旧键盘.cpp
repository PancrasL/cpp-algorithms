#include <iostream>
#include <map>
#include <stdio.h>
#include <string>
using namespace std;
char toUp(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c;
}
int main(void)
{
    map<char, int> mp;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    for (int i = 0; i < s1.length(); i++) {
        s1[i] = toUp(s1[i]);
        mp[s1[i]] = 1;
    }
    for (int i = 0; i < s2.length(); i++) {
        s2[i] = toUp(s2[i]);
        mp[s2[i]] = 0;
    }
    for (int i = 0; i < s1.length(); i++) {
        if (mp[s1[i]] >= 1) {
            mp[s1[i]] = 0;
            putchar(s1[i]);
        }
    }
    cout << endl;

    return 0;
}