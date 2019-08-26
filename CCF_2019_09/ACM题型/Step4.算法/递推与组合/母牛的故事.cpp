#include<iostream>
#include<vector>

#define MAX 55
using namespace std;
vector<int> ans(MAX);
void getAns(){
    ans[1] = 1;
    ans[2] = 2;
    ans[3] = 3;
    ans[4] = 4;
    for(int i =5;i<MAX;i++)
        ans[i] = ans[i-1] + ans[i-3];
}
int main(void)
{
    getAns();
    int n;
    while(cin>>n){
        if(n==0)
            break;
        cout<<ans[n]<<endl;
    }
    return 0;
}