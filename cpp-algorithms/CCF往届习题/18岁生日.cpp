//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int days_of_year(int year)
//{
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//		return 366;
//	else return 365;
//}
//int main(void)
//{
//	int T;
//	int year, month, day;
//	cin >> T;
//	while (T--)
//	{
//		scanf("%d-%d-%d", &year, &month, &day);
//		if (days_of_year(year) == 366 && month == 2 && day == 29 && days_of_year(year + 18) == 365)
//		{
//			cout << -1 << endl;
//			continue;
//		}
//		if (month > 2 || (month == 2 && day == 29)) year++;
//		int sum = 0;
//		for (int i = 0; i < 18; i++)
//		{
//			sum += days_of_year(year + i);
//		}
//		cout << sum << endl;
//	}
//}