#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int cnt = 0;
    while (true) {
        if (n == 1) {
            break;
        } else if (n & 1) {
            n = (3 * n + 1) / 2;
            cnt++;
        } else {
            n = n / 2;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}