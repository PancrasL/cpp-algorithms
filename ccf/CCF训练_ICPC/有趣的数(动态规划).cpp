//#define MOD 1000000007
//#include<iostream>
//using namespace std;
//unsigned long long D[1001][6];
//int main(void)
//{
//	D[1][0] = 1;
//	int n;
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//	{
//		D[i][0] = (D[i - 1][0]) % MOD;
//		D[i][1] = (D[i - 1][0] + 2 * D[i - 1][1]) % MOD;
//		D[i][2] = (D[i - 1][0] + D[i - 1][2]) % MOD;
//		D[i][3] = (D[i - 1][1] + 2 * D[i - 1][3]) % MOD;
//		D[i][4] = (D[i - 1][1] + D[i - 1][2] + 2 * D[i - 1][4]) % MOD;
//		D[i][5] = (D[i - 1][3] + D[i - 1][4] + 2 * D[i - 1][5]) % MOD;
//	}
//	cout << D[n][5] << endl;
//}