#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
#define MAX 51
unsigned long long ans[MAX];
int N;
void getAns()
{
    ans[1] = 0;
    ans[2] = 1;
    ans[3] = 2;
    for(int i=4;i<MAX;i++){
        ans[i] = ans[i-1]+ans[i-2];
    }
}
int main(void)
{
    getAns();
    cin>>N;
    while(N--){
        int a, b;
        cin>>a>>b;
        printf("%lld\n", ans[b-a+1]);
    }
    return 0;
}