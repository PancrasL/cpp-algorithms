//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int n;
//	int num[31][31];
//	while (cin>>n)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			num[i][1] = num[i][i] = 1;
//			for (int j = 2; j <= i-1; j++)
//			{
//				num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
//			}
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			cout << num[i][1];
//			for (int j = 2; j <= i; j++)
//			{
//				cout << ' ' << num[i][j];
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//}