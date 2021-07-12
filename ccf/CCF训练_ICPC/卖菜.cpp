//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector<int> price1(n + 1);
//	vector<int> price2(n + 1);
//	for (int i = 1; i <= n; i++)
//		cin >> price1[i];
//	price2[1] = (price1[1] + price1[2]) / 2;
//	price2[n] = (price1[n] + price1[n - 1]) / 2;
//	for (int i = 2; i <= n - 1; i++)
//		price2[i] = (price1[i - 1] + price1[i] + price1[i + 1]) / 3;
//	for (int i = 1; i <= n; i++)
//		cout << price2[i] << ' ';
//	return 0;
//}