//#include<iostream>
//using namespace std;
//int matrix[101][101];
//int main(void)
//{
//	int n;
//	int x1, x2, y1, y2;
//	cin >> n;
//	while (n--)
//	{
//		cin >> x1 >> y1 >> x2 >> y2;
//		for (int i = x1; i < x2; i++)
//			for (int j = y1; j < y2; j++)
//				matrix[i][j] = 1;
//	}
//	int ans = 0;
//	for (int i = 0; i <= 100; i++)
//		for (int j = 0; j <= 100; j++)
//			if (matrix[i][j] == 1) ans++;
//	cout << ans << endl;
//	return 0;
//}