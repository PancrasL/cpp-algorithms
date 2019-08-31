#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    int maxCnt = 0;
    int num = 0;
    for (auto e : mp) {
        if (e.second > maxCnt) {
            maxCnt = e.second;
            num = e.first;
        } else if (e.second == maxCnt) {
            num = min(num, e.first);
        }
    }
    cout << num;
    return 0;
}