//正序读入，倒序输出
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(void)
{
    vector<string> vec;
    string s;
    while (cin >> s) {
        vec.push_back(s);
    }

    int first = 1;
    for (int i = vec.size() - 1; i >= 0; i--) {
        if (first) {
            cout << vec[i];
            first = 0;
        } else
            cout << ' ' << vec[i];
    }
    cout << endl;

    return 0;
}