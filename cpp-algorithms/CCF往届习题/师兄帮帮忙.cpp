//#include<iostream>
//#include<vector>
//using namespace std;
//#define MOD 1000000007
//unsigned long long powermod(unsigned long long a, unsigned long long b, unsigned long long mod)
//{
//	unsigned long long sum = 1;
//	while (b)
//	{
//		if (b & 1)//bÊÇÆæÊý
//		{
//			sum = (sum*a) % mod;
//		}
//		b /= 2;
//		a = (a*a) % mod;
//	}
//	return sum;
//}
//int main(void)
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n, t, k;
//		cin >> n >> t >> k;
//		k = powermod(k, t, MOD);
//		t %= n;
//		vector<unsigned long long> num(n + 1);
//		unsigned long long value;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> value;
//			num[(i + t) % n] = (value*k) % MOD;
//		}
//		cout << num[0];
//		for (int i = 1; i < n; i++)
//			cout << ' ' << num[i];
//		cout << endl;
//	}
//}