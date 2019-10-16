#include <iostream>
#include <set>
using namespace std;
int main(void)
{
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0)
            break;
        set<int> A;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            A.insert(temp);
        }
        for (int i = 0; i < m; i++) {
            cin >> temp;
            A.erase(temp);
        }
        if (A.empty())
            cout << "NULL" << endl;
        else {
            for (auto e : A)
                cout << e << ' ';
            cout << endl;
        }
    }
    return 0;
}