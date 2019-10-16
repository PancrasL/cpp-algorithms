#include<string>
#include<iostream>
#include<ctype.h>
#include<stdio.h>
using namespace std;
int main(void)
{
    char cur, last;
    last = ' ';
    while((cur = getchar())!=EOF){
        if(last == ' '|| last == '\t' || last == '\n')
            putchar(toupper(cur));
        else
            putchar(cur);
        last = cur;
    }
    return 0;
}