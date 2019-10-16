//#include<iostream>
//using namespace std;
//int num[500001];
//void getnum()
//{
//	num[1] = 0;
//	for (int i = 1; i <= 500000 / 2; i++)
//	{
//		for (int j = i + i; j <= 500000; j += i)
//		{
//			num[j] += i;
//		}
//	}
//}
//int main(void)
//{
//	int T;
//	cin >> T;
//	getnum();
//	while (T--)
//	{
//		int n;
//		cin >> n;
//		cout << num[n] << endl;
//	}
//}