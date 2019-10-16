//#include<iostream>
//using namespace std;
//int num[21];
//int main(void)
//{
//	num[0] = 0;
//	for (int i = 1; i <= 20; i++)
//	{
//		for (int j = i - 1; j >= 0; j--)
//			num[i] += num[j];
//		num[i] += 1 << (i - 1);
//	}
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n;
//		cin >> n;
//		cout << num[n] << endl;
//	}
//}