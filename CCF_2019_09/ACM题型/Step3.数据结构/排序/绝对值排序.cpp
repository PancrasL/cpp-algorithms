#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
bool cmp(int& a, int& b)
{
    return abs(a) > abs(b);
}
int main(void)
{
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        vector<int> nums;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        sort(nums.begin(), nums.end(), cmp);
        cout << nums[0];
        for (int i = 1; i < nums.size(); i++) {
            cout << ' ' << nums[i];
        }
        cout << endl;
    }
}