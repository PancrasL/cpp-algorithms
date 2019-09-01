#include <iostream>
using namespace std;
int main(void)
{
    long double A, B, C;
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> A >> B >> C;
        cout << "Case #" << i << ": ";
        if (A + B > C)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}