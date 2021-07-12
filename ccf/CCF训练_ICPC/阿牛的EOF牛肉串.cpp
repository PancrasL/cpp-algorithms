//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	vector<vector<unsigned long long>> num(3);//分别表示以E、O、F结尾的串的个数
//	num[0].resize(41); num[1].resize(41); num[2].resize(41);
//	num[0][1] = 1; num[1][1] = 1; num[2][1] = 1;
//	for (int i = 2; i < 41; i++)
//	{
//		num[0][i] = num[0][i - 1] + num[1][i - 1] + num[2][i - 1];
//		num[1][i] = num[0][i - 1] + num[2][i - 1];
//		num[2][i] = num[0][i - 1] + num[1][i - 1] + num[2][i - 1];
//	}
//	int n;
//	while (cin >> n)
//		cout << num[0][n] + num[1][n] + num[2][n] << endl;
//}