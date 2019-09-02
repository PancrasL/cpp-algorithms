#include <iostream>
using namespace std;
int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int daysSum[13];
void getDaysSum()
{
    daysSum[0] = 0;
    for (int i = 1; i <= 12; i++) {
        daysSum[i] = daysSum[i - 1] + days[i - 1];
    }
}
bool leapYear(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        return true;
    }
    return false;
}

int getAns(int year, int month, int day){
    int total = daysSum[month-1]+day;
    if(leapYear(year)&&month>2){
        total++;
    }
    return total;

}
int main(void)
{
    int year, month, day;
    while (scanf("%d/%d/%d", &year, &month, &day) != EOF) {
        cout<<getAns(year, month, day)<<endl;
    }
}
