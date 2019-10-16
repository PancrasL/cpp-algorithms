#include <algorithm>
#include <iostream>
using namespace std;
int main(void)
{
    char buf[10];
    while (cin >> buf) {
        if (buf[0] > buf[1]) {
            swap(buf[0], buf[1]);
        }
        if (buf[0] > buf[2]) {
            swap(buf[0], buf[2]);
        }
        if (buf[1] > buf[2]) {
            swap(buf[1], buf[2]);
        }
        cout << buf[0] << ' ' << buf[1] << ' ' << buf[2] << endl;
    }
    return 0;
}