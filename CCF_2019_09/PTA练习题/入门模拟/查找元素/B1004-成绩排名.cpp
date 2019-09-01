#include <iostream>
#include <limits.h>
#include <string>
using namespace std;
int main(void)
{
    int n;
    cin >> n;

    string namel, idl, nameh, idh;
    int scorel, scoreh;

    scorel = INT_MAX;
    scoreh = INT_MIN;
    while (n--) {
        string name, id;
        int score;
        cin >> name >> id >> score;
        if (score < scorel) {
            scorel = score;
            namel = name;
            idl = id;
        }
        if (score > scoreh) {
            scoreh = score;
            nameh = name;
            idh = id;
        }
    }
    cout << nameh << ' ' << idh << endl;
    cout << namel << ' ' << idl << endl;

    return 0;
}