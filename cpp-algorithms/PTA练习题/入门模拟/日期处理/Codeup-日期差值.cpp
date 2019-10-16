//计算相对于元日期的天数，然后两个天数相减，注意日期的相对大小。
#include <iostream>
#include <string>
using namespace std;
int daysOfMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int daysSum[13];
//计算到达该月经过了几天
void getDaysSum()
{
    daysSum[0] = 0;
    for (int i = 1; i <= 12; i++) {
        daysSum[i] = daysSum[i - 1] + daysOfMonth[i - 1];
    }
}

//计算该年的总天数
int leapYear(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 366;
    return 365;
}

//计算当前日期是该年的第几天
int daysToCurrent(int year, int month, int day)
{
    int total = daysSum[month - 1] + day;
    if (leapYear(year) == 366 && month > 2) {
        total++;
    }
    return total;
}

//将字符串中的日期分割为数字
void splitDate(const string& date, int& year, int& month, int& day)
{
    year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + (date[3] - '0');
    month = (date[4] - '0') * 10 + (date[5] - '0');
    day = (date[6] - '0') * 10 + (date[7] - '0');
}

int main(void)
{
    getDaysSum();

    int year1, month1, day1;
    int year2, month2, day2;
    string date1, date2;

    while (cin >> date1 >> date2) {
        if (date1 > date2) { //保证date1日期小
            date1.swap(date2);
        }

        splitDate(date1, year1, month1, day1);
        splitDate(date2, year2, month2, day2);

        //计算两个日期距离‘year1年1月1日的天数‘
        int sum1 = 0;
        int sum2 = 0;
        sum1 = daysToCurrent(year1, month1, day1);
        for (int i = year1; i < year2; i++) {
            sum2 += leapYear(i);
        }
        sum2 += daysToCurrent(year2, month2, day2);

        cout << sum2 - sum1 + 1 << endl;
    }
    return 0;
}
