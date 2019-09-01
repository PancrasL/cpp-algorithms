#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
struct node {
    int year;
    int month;
    int day;
    string name;
    node(int year1, int month1, int day1, string name1)
        : year(year1)
        , month(month1)
        , day(day1)
        , name(name1){};
    node(){};
    bool operator<(node& n)
    {
        if (year == n.year) {
            if (month == n.month) {
                return day < n.day;
            } else
                return month < n.month;
        } else
            return year < n.year;
    }
};
bool isOK(int year, int month, int day)
{
    if (year > 2014)
        return false;
    else if (year == 2014) {
        if (month > 9)
            return false;
        else if (month == 9 && day > 6)
            return false;
        else
            return true;

    } else if (year == 1814) {
        if (month < 9)
            return false;
        else if (month == 9 && day < 6)
            return false;
        else
            return true;
    } else if (year < 1814)
        return false;
    else
        return true;
}
int main(void)
{
    int N;
    int cnt = 0;
    int year, month, day;
    string name;
    vector<node> vec;
    cin >> N;
    while (N--) {
        cin >> name;
        scanf("%d/%d/%d", &year, &month, &day);
        if (isOK(year, month, day)) {
            vec.push_back(node(year, month, day, name));
            cnt++;
        }
    }
    sort(vec.begin(), vec.end());
    if (vec.empty())
        cout << 0 << endl;
    else
        cout << cnt << ' ' << vec[0].name << ' ' << vec[vec.size() - 1].name << endl;
    return 0;
}