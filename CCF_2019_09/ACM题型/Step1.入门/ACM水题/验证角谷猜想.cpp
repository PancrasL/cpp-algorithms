#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(void)
{
    int N;
    cin >> N;
    while (N--) {
        int num;
        cin >> num;
        vector<int> ans;
        set<int> s;
        while (true) {
            if (num & 1) {
                ans.push_back(num);
                num = num * 3 + 1;
            } else
                num /= 2;
            if (s.count(num) == 1) {
                cout << "No number can be output !" << endl;
                break;
            } else
                s.insert(num);
            if (num == 1) {
                if (ans.empty())
                    cout << "No number can be output !" << endl;
                else {
                    cout << ans[0];
                    for (int i = 1; i < ans.size(); i++)
                        cout << ' ' << ans[i];
                    cout << endl;
                }
                break;
            }
        }
    }
    return 0;
}