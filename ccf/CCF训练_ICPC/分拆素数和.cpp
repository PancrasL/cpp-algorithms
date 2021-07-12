//#include<iostream>
//#include<vector>
//using namespace std;
//#define SIZE 100000
//int prime[SIZE];
//void getnum()
//{
//	for (int i = 0; i < SIZE; i++)//³õÊ¼»¯
//	{
//		prime[i] = 1;
//	}
//	prime[0] = prime[1] = 0;
//	for (int i = 2; i < SIZE; i++)
//	{
//		if (prime[i])
//		{
//			for (int j = i+i; j < SIZE; j += i)
//			{
//				prime[j] = 0;
//			}
//		}
//	}
//	return;
//}
//int main(void)
//{
//	getnum();
//	while (true)
//	{
//		int num;
//		cin >> num;
//		if (num == 0) break;
//		int cnt = 0;
//		for (int i = 2; i <= num / 2; i++)
//		{
//			if (prime[i] && prime[num - i] && i != num - i)
//			{
//				cnt++;
//			}
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}