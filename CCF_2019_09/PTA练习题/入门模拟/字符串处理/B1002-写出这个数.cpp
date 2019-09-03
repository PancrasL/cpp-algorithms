#include <iostream>
#include <stack>
#include <string>
using namespace std;
const char* pinyin[] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };

int main(void)
{
    string n;
    cin >> n;

    int sum = 0;
    int len = n.length();
    for (int i = 0; i < len; i++) {
        sum += n[i] - '0';
    }

    stack<int> s;
    while (sum) {
        s.push(sum % 10);
        sum /= 10;
    }

    if (s.empty())
        cout << "ling" << endl;
    else {
        cout << pinyin[s.top()];
        s.pop();
        while (!s.empty()) {
            cout << ' ' << pinyin[s.top()];
            s.pop();
        }
        cout << endl;
    }

    return 0;
}