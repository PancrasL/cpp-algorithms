//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int monthsum[] = {  // 到某月份的天数，润年另外加天数
//		  0                                 // 1月
//		, 31                                // 2月
//		, 31 + 28                             // 3月
//		, 31 + 28 + 31                          // 4月
//		, 31 + 28 + 31 + 30                       // 5月
//		, 31 + 28 + 31 + 30 + 31                    // 6月
//		, 31 + 28 + 31 + 30 + 31 + 30                 // 7月
//		, 31 + 28 + 31 + 30 + 31 + 30 + 31              // 8月
//		, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31           // 9月
//		, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30        // 10月
//		, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31     // 11月
//		, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30  // 12月
//};
//bool is_special(int year)
//{
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//	{
//		return true;
//	}
//	return false;
//}
//int main(void)
//{
//	int year, month, day;
//	while (scanf("%d/%d/%d", &year, &month, &day) != EOF)
//	{
//		int days = monthsum[month - 1] + day;
//		if (is_special(year) && month > 2)
//		{
//			days++;
//		}
//		cout << days << endl;
//	}
//}