#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(void)
{
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        string win, lose;
        set<string> losers;
        set<string> players;
        for (int i = 0; i < n; i++) {
            cin >> win >> lose;
            losers.insert(lose);
            players.insert(win);
            players.insert(lose);
        }
        if (players.size() - losers.size() == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}