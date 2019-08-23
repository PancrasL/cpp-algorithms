#include <iostream>
#include <stdio.h>
using namespace std;
int leapyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    return 0;
}
int main(void)
{
    int T;
    cin >> T;
    while (T--) {
        int year, month, day;

        scanf("%d-%d-%d", &year, &month, &day);
        if (leapyear(year)==1 && month == 2 && day == 29 && leapyear(year + 18)==0) {
            cout << -1 << endl;
        } else {

            if ((month == 2 && day == 29) || month > 2)
                year++;
            int total = 0;
            for (int i = 0; i < 18; i++) {
                total += 365 + leapyear(year + i);
            }
            cout << total << endl;
        }
    }
    return 0;
}