#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int hashTable[257];
int main(void)
{
    string cur, want;
    getline(cin, cur);
    getline(cin, want);

    //统计已有珠子的数量
    int len = cur.length();
    for (int i = 0; i < len; i++)
        hashTable[cur[i]]++;

    //计算想要的珠子的数量
    len = want.length();
    int index;
    bool flag = true;
    int need = 0;
    for (index = 0; index < len; index++) {
        if (--hashTable[want[index]] < 0) {
            flag = false;
            need++;
        }
    }
    if (!flag)
        cout << "No " << need << endl;
    else
        cout << "Yes " << cur.length() - want.length() << endl;

    return 0;
}