#include<iostream>
#include<stack>
using namespace std;
int main(void)
{
    int m;
    int A, B;
    while(cin>>m){
        if(m == 0)
            break;
        cin>>A>>B;
        long long C =A +B;
        stack<int> ans;
        if(C==0)
            cout<<0;
        while(C){
            ans.push(C%m);
            C/=m;
        }
        while(!ans.empty()){
            cout<<ans.top();
            ans.pop();
        }
        cout<<endl;
    }
    return 0;
}