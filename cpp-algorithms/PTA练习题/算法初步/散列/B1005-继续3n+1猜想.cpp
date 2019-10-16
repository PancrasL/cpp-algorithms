#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>
using namespace std;
bool hashTable[10000];
int main(void)
{
    int K;
    cin >> K;

    int num[110];
    for (int i = 0; i < K; i++) {
        cin >> num[i];
        //进行3n+1猜想
        int m = num[i];
        while (m != 1) {
            if (m % 2 == 0) {
                m /= 2;
            } else
                m = (3 * m + 1)/2;
            hashTable[m] = true;
        }
    }

    vector<int> ans;
    for (int i = 0; i < K; i++) {
        if (hashTable[num[i]] == false)
            ans.push_back(num[i]);
    }
    sort(ans.begin(), ans.end(), greater<int>());

    if (!ans.empty()) {
        cout << ans[0];
        for (int i = 1; i < ans.size(); i++)
            cout << ' ' << ans[i];
        cout << endl;
    }
    return 0;
}