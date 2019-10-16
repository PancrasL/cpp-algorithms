#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(void)
{
    string target;
    string line;

    while (getline(cin, target)) {
        if (target == "#")
            break;
        getline(cin, line);
        vector<int> statistic(257);
        int len = line.size();
        for (int i = 0; i < len; i++) {
            statistic[line[i]]++;
        }
        len = target.size();
        for (int i = 0; i < len; i++) {
            cout << target[i] << ' ' << statistic[target[i]] << endl;
        }
    }
    return 0;
}