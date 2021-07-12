//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int T, n;
//	unsigned long long a[21];
//	unsigned long long sum[21];
//	a[0] = 0; a[1] = 1; a[2] = 3;
//	for (int i = 3; i <= 20; i++)
//	{
//		a[i] = 0;
//		for (int j = 1; j < i; j++)
//			a[i] += a[j];
//		a[i] += 1 << i - 1;
//	}
//	cin >> T;
//	for (int i = 0; i < T; i++)
//	{
//		cin >> n;
//		cout << a[n] << endl;
//	}
//
//}