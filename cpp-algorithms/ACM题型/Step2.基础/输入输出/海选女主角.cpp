#include <iostream>
using namespace std;
long long abs1(long long number)
{
    return number < 0 ? -number : number;
}
int main(void)
{
    int m, n;
    while (cin >> m >> n) {
        int x, y;
        long long s;
        x = y = 1;
        s = 0;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                long long temp;
                cin >> temp;
                if (abs1(temp) > abs1(s)) {
                    s = temp;
                    x = i;
                    y = j;
                }
            }
        }
        cout << x << ' ' << y << ' ' << s << endl;
    }
    return 0;
}