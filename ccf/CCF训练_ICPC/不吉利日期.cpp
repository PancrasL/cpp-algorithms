//#include<iostream>
//#include<string>
//using namespace std;
//int month[] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
//int main(void)
//{
//	int date[13];
//	date[0] = 12;
//	for (int i = 1; i <= 12; i++)//�����i��13�վ���1��1�յ�����
//	{
//		date[i] = date[i - 1] + month[i - 1];
//	}
//	int week;
//	cin >> week;//1��1�յ�������
//	week %= 7;
//	for (int i = 1; i <= 12; i++)
//	{
//		int temp = (week + date[i]) % 7;
//		if (temp == 5) cout << i << endl;
//	}
//}