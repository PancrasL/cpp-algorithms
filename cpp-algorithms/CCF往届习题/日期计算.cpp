//#include<iostream>
//#include<vector>
//using namespace std;
//int month[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//int monthSpecial[] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
//bool isSpecialYear(int year)
//{
//	if (year % 400 == 0)
//		return true;
//	if (year % 4 == 0 && year % 100 != 0)
//		return true;
//	return false;
//}
//int main(void)
//{
//	int y, d;
//	cin >> y >> d;
//	int i = 0;
//	if (isSpecialYear(y))//是闰年
//	{
//		while (d > monthSpecial[i])
//		{
//			d = d - monthSpecial[i];
//			i++;
//		}
//	}
//	else//是普通年
//	{
//		while (d > month[i])
//		{
//			d = d - month[i];
//			i++;
//		}
//	}
//	cout << i << endl << d << endl;
//	return 0;
//}