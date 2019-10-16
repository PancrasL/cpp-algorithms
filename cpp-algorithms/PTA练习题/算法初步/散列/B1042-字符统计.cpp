#include <iostream>
#include <stdio.h>
using namespace std;
int hashTable[257];
bool isAlpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    if (c >= 'A' && c <= 'Z')
        return true;
}

char upperToLower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    return c;
}

int main(void)
{
    char c;
    while ((c = getchar()) != '\n') {
        if(isAlpha(c)){
            hashTable[upperToLower(c)]++;
        }
    }

    int maxCnt = 0;
    for(int i='a';i<='z';i++){
        if(hashTable[i] > maxCnt){
            maxCnt = hashTable[i];
            c = i;
        }
    }
    printf("%c %d\n", c, maxCnt);

    return 0;
}