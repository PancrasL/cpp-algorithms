#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0)
            break;
        vector<int> ans;
        bool output = false;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if (temp < m)
                ans.push_back(temp);
            else {
                if (!output) {
                    ans.push_back(m);
                    output = true;
                }
                ans.push_back(temp);
            }
        }
        if (!output)
            ans.push_back(m);
        cout << ans[0];
        for (int i = 1; i < ans.size(); i++) {
            cout << ' ' << ans[i];
        }
        cout << endl;
    }
    return 0;
}