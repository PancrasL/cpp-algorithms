//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> isprime(10000, 1);
//void getnum()
//{
//	isprime[0] = isprime[1] = 0;
//	for (int i = 2; i < 10000; i++)
//	{
//		if (isprime[i])
//		{
//			for (int j = i + i; j < 10000; j += i)
//				isprime[j] = 0;
//		}
//	}
//}
//int main(void)
//{
//	getnum();
//	int S;
//	while (cin>>S)
//	{
//		int ans = 0;
//		for(int i=S/2;i>=2;i--)
//			if (isprime[i] && isprime[S - i])
//			{
//				ans = i * (S - i);
//				break;
//			}
//		cout << ans << endl;
//	}
//}