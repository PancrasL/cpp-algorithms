//#include<iostream>
//#include<vector>
//#include<memory>
//using namespace std;
////c(n,m)=c(n-1,m)+c(n-1,m-1)
//#define N 2001
//#define MOD 1007
//int c[2001][2001];
//int main(void)
//{
//	c[0][0] = 1;
//	for (int i = 1; i <= N; i++) {
//		c[i][0] = 1;
//		for (int j = 1; j <= N; j++)
//			c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % MOD;
//	}
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int m, n;
//		cin >> m >> n;
//		cout << c[n][m] << endl;
//	}
//}