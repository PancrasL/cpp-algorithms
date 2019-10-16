#include <iostream>
using namespace std;
int main(void)
{
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        A %= 100;
        B %= 100;
        cout << (A + B) % 100 << endl;
    }
    return 0;
}