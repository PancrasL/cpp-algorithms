//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<stdio.h>
//using namespace std;
//int prime[10001];
//void getnum()
//{
//	for (int i = 0; i < 10001; i++)//³õÊ¼»¯
//	{
//		prime[i] = 1;
//	}
//	prime[0] = prime[1] = 0;
//	for (int i = 2; i < 10001; i++)
//	{
//		if (prime[i])
//		{
//			for (int j = i+i; j < 10001; j += i)
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
//	int num;
//	while (scanf("%d",&num)!=EOF)
//	{
//		int i;
//		for (i = num/2; i >= 2; i--)
//		{
//			if (prime[i] && prime[num - i])
//			{
//				break;
//			}
//		}
//		cout << i << ' ' << num - i << endl;
//	}
//	return 0;
//}