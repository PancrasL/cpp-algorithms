//#include <iostream>
//#include <stdio.h>
//using namespace std;
//int months[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//int months1[] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//int isSpecialYear(int year)
//{
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//		return 366;
//	return 365;
//}
//int main(void)
//{
//	int a, b, c, y1, y2; //a月的第b个星期c
//	cin >> a >> b >> c >> y1 >> y2;
//	int days = 0; //y年1月1日距离1850.1.1的天数
//	for (int i = 1850; i < y1; i++)
//		days += isSpecialYear(i);
//	c %= 7;
//	for (int y = y1; y <= y2; y++)
//	{
//		int temp = days;
//		if (isSpecialYear(y) == 365)
//		{
//			for (int i = 1; i < a; i++)
//				temp += months[i]; //y1年a月1日距离1850.1.1的天数
//		}
//		else
//		{
//			for (int i = 1; i < a; i++)
//				temp += months1[i]; //y1年a月1日距离1850.1.1的天数
//		}
//		temp += 2;
//		temp %= 7;     //计算出y1年a月1日的星期数
//		int m_day = 1; //月中的第几天
//		while (temp != c)
//		{
//			m_day++;
//			temp = (temp + 1) % 7;
//		}
//		m_day += (b - 1) * 7;
//		if (isSpecialYear(y) == 366)
//		{
//			if (m_day > months1[a])
//				cout << "none" << endl;
//			else printf("%04d/%02d/%02d\n", y, a, m_day);
//		}
//		else
//		{
//			if (m_day > months[a])
//				cout << "none" << endl;
//			else printf("%04d/%02d/%02d\n", y, a, m_day);
//		}
//
//		days += isSpecialYear(y);
//	}
//}