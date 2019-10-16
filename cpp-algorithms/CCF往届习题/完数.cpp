//#include<iostream>
//#include<algorithm>
//using namespace std;
//int num[100001];
//void getnum()
//{
//	num[0] = num[1] = 0;
//	for (int i = 1; i <= 50000; i++)
//	{
//		for (int j = i + i; j <= 100000; j += i)
//			num[j] += i;
//	}
//}
//int cnt[100001];
//int main(void)
//{
//	getnum();
//	for (int i = 1; i <= 100000; i++)
//	{
//		if (num[i] == i)
//			cnt[i] = cnt[i - 1] + 1;
//		else cnt[i] = cnt[i - 1];
//	}
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int num1, num2;
//		cin >> num1 >> num2;
//		if (num2 < num1) swap(num1, num2);
//		cout << cnt[num2] - cnt[num1 - 1] << endl;
//	}
//}