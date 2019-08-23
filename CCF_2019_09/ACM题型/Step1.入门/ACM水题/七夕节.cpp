#include <iostream>
#include <vector>
using namespace std;
#define MAX 500000
vector<int> ans(MAX + 1);
void getAns()
{
    ans[1] = 0;
    for (int i = 1; i <= MAX / 2; i++) {
        for (int j = i + i; j <= MAX; j += i) {
            ans[j] += i;
        }
    }
}
int main(void)
{
    getAns();
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        cout<<ans[N]<<endl;
    }
    return 0;
}