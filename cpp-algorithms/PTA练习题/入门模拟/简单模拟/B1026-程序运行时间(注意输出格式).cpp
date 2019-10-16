//时分秒数字不足两位时记得补0
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(void)
{
    int c1, c2;
    cin >> c1 >> c2;
    int time = c2 - c1;
    if(time%100>=50){
        time = time/100+1;
    }
    else 
        time = time/100;
    
    int hour = time/3600;
    time %=3600;
    int minute = time / 60;
    int second = time % 60;
    printf("%02d:%02d:%02d\n", hour, minute, second);
    return 0;
}