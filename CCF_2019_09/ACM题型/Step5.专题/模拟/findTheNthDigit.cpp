#include <iostream>
using namespace std;
int main(void)
{
    int K;
    cin >> K;
    while (K--) {
        int N;
        cin >> N;

        int sum = 0;
        int grow = 1;
        while (true) {
            if (N > sum && N <= sum + grow) {
                int ans = (N-sum)%9;
                if(ans == 0)
                    ans = 9;
                cout<<ans<<endl;
                break;
            }
            sum = sum + grow++;
        }
    }
    return 0;
}