//零此项的求导为0
//若求导之后没有任何非0项，输出0 0
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int a, b;
    bool flag = false;
    int cnt = 0;
    while (cin >> a >> b) {
        if (b == 0)
            continue;
        cnt++;
        if (flag) {
            cout << ' ';
        } else
            flag = true;
        cout << a * b << ' ' << b - 1;
    }
    if (cnt == 0)
        cout << "0 0";
    cout << endl;

    return 0;
}