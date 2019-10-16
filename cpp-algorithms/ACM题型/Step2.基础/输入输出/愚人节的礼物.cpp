#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string s;
    while (cin >> s) {
        int i = 0;
        int level = 0;
        while (s[i]) {
            if (s[i] == '(')
                level++;
            else if (s[i] == 'B')
                break;
            else
                level--;
            i++;
        }
        cout<<level<<endl;
    }
    return 0;
}