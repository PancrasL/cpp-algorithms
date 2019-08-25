#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while (t--) {
        char c;
        while ((c = getchar()) != '.')
            ;

        string s;
        cin >> s;
        int n;
        cin >> n;
        if (n > s.size())
            cout << "0" << endl;
        else
            cout << s[n - 1] << endl;
    }
    return 0;
}