#include <iostream>
using namespace std;
int ans[21];
void getAns()
{
    ans[0] = 0;
    for (int i = 1; i <= 20; i++) {
        for (int j = i - 1; j >= 0; j--)
            ans[i] += ans[j];
        ans[i] += 1 << (i - 1);
    }
}
int main(void)
{
    getAns();
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}