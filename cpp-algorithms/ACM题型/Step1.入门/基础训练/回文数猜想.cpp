#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
bool isPalindrome(int& num, int& nextNum)
{
    char buf[32];
    sprintf(buf, "%d", num);
    string s = buf;
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (s == rev) {
        return true;
    } else {
        int x, y;
        sscanf(s.c_str(), "%d", &x);
        sscanf(rev.c_str(), "%d", &y);
        nextNum = x + y;
        return false;
    }
}
int main(void)
{
    int number;
    while (cin >> number) {
        int nextNumber;
        int cnt = 0;
        vector<int> ans;
        ans.push_back(number);
        while (!isPalindrome(number, nextNumber)) {
            number = nextNumber;
            ans.push_back(number);
            cnt++;
        }

        cout << cnt << endl;
        cout << ans[0];
        for (int i = 1; i < ans.size(); i++) {
            cout << "--->" << ans[i];
        }
        cout << endl;
    }
    return 0;
}