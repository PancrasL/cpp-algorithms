#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int hashTable[257];
const string dict = "PATest";
int main(void)
{
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        hashTable[s[i]]++;
    }

    while(true){
        bool flag = true;
        for(int i=0;i<6;i++){
            if(hashTable[dict[i]]>0){
                hashTable[dict[i]]--;
                putchar(dict[i]);
                flag = false;
            }
        }
        if(flag == true)
            break;
    }

    return 0;
}