#include <iostream>
using namespace std;
int main(void)
{
    int AH, AM, AS, BH, BM, BS;
    int N;
    cin >> N;
    while (N--) {
        cin >> AH >> AM >> AS >> BH >> BM >> BS;
        int CH, CM, CS;
        int carry = 0;

        CS = AS + BS;
        carry = CS / 60;
        CS %= 60;

        CM = AM + BM + carry;
        carry = CM / 60;
        CM %= 60;

        CH = AH + BH + carry;
        cout << CH << ' ' << CM << ' ' << CS << endl;
    }
}