#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(void)
{
    int M;
    cin >> M;
    getchar();
    while (M--) {
        string line;
        getline(cin, line);
        int t1, t2, t3, t4;
        t1 = t2 = t3 = t4 = 0;
        if (line.size() >= 8 && line.size() < 16) {
            int i = 0;
            while (line[i]) {
                if (line[i] >= 'A' && line[i] <= 'Z')
                    t1 = 1;
                else if (line[i] >= 'a' && line[i] <= 'z')
                    t2 = 1;
                else if (line[i] >= '0' && line[i] <= '9')
                    t3 = 1;
                else {
                    switch (line[i]) {
                    case '~':
                    case '!':
                    case '@':
                    case '#':
                    case '$':
                    case '%':
                    case '^':
                        t4 = 1;
                        break;
                    default:
                        break;
                    }
                }
                i++;
            }
            if (t1 + t2 + t3 + t4 >= 3)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}