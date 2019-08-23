#include <iostream>
#include <set>
#include <sstream>
using namespace std;
int main(void)
{
    string line;
    while (getline(cin, line)) {
        if (line == "#")
            break;
        istringstream inStr(line);
        set<string> S;
        string word;
        while (inStr >> word) {
            S.insert(word);
        }
        cout << S.size() << endl;
    }
    return 0;
}