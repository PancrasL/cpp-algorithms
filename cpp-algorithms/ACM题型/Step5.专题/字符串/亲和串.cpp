#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string s1, s2;
    while (cin >> s1) {
        cin>>s2;
        if (s1.size() < s2.size())
            cout << "no" << endl;
        else {
            s1 += s1;
            int pos = s1.find(s2);
            if (pos>=0) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}