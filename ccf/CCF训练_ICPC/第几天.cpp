//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int monthsum[] = {  // ��ĳ�·ݵ��������������������
//		  0                                 // 1��
//		, 31                                // 2��
//		, 31 + 28                             // 3��
//		, 31 + 28 + 31                          // 4��
//		, 31 + 28 + 31 + 30                       // 5��
//		, 31 + 28 + 31 + 30 + 31                    // 6��
//		, 31 + 28 + 31 + 30 + 31 + 30                 // 7��
//		, 31 + 28 + 31 + 30 + 31 + 30 + 31              // 8��
//		, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31           // 9��
//		, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30        // 10��
//		, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31     // 11��
//		, 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30  // 12��
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