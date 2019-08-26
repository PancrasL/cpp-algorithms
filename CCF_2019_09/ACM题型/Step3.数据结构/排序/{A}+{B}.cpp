#include <iostream>
#include <set>
using namespace std;
int main(void)
{
    int n, m;
    while (cin >> n >> m) {
        set<int> s;
        for (int i = 0; i < m + n; i++) {
            int temp;
            cin >> temp;
            s.insert(temp);
        }
        set<int>::iterator it = s.begin();
        cout << *it++;
        while (it != s.end())
            cout << " " << *it++;
        cout<<endl;
    }
    return 0;
}