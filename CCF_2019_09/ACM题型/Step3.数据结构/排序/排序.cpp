#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int sToInt(string s)
{
    int num = 0;
    for (int i = 0; i < s.size(); i++) {
        num = num * 10 + s[i] - '0';
    }
    return num;
}
int main(void)
{
    string line;
    while (getline(cin, line)) {
        for (int i = 0; i < line.size(); i++) {
            if (line[i] == '5')
                line[i] = ' ';
        }
        istringstream inStr(line);
        vector<int> ans;
        string s;
        while (inStr >> s) {
            ans.push_back(sToInt(s));
        }
        sort(ans.begin(), ans.end());
        cout << ans[0];
        for (int i = 1; i < ans.size(); i++)
            cout << ' ' << ans[i];
        cout<<endl;
    }
    return 0;
}