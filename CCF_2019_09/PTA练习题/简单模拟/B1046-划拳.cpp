#include <iostream>
using namespace std;
int main(void)
{
    int N;
    int cnt1, cnt2;
    cnt1 = cnt2 = 0;
    cin >> N;
    while (N--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int sum = a + c;
        if (b == sum && d == sum)
            continue;
        else if (b == sum)
            cnt2++;
        else if (d == sum)
            cnt1++;
    }
    cout << cnt1 << ' ' << cnt2 << endl;

    return 0;
}