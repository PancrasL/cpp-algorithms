#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;
int main(void)
{
    string line;
    map<string, int> mp;
    mp["zero"] = 0;
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
    mp["four"] = 4;
    mp["five"] = 5;
    mp["six"] = 6;
    mp["seven"] = 7;
    mp["eight"] = 8;
    mp["nine"] = 9;

    while (getline(cin, line)) {
        istringstream inStr(line);

        int a, b;
        a = b = 0;
        string s;
        while (inStr >> s) {
            if (s == "+")
                break;
            a = a * 10 + mp[s];
        }

        while (inStr >> s) {
            if (s == "=")
                break;
            b = b * 10 + mp[s];
        }
        if (a == 0 && b == 0)
            break;
        cout << a + b << endl;
    }
    return 0;
}