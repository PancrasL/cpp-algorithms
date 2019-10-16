//#include<iostream>
//#include<vector>
//using namespace std;
//int matrix[31][31];
//int erase[31][31];
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			cin >> matrix[i][j];
//	
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//		{
//			if (j <= m - 2)
//			{
//				if (matrix[i][j] == matrix[i][j + 1] && matrix[i][j + 1] == matrix[i][j + 2])//同一行3个相同
//					erase[i][j] = erase[i][j + 1] = erase[i][j + 2] = 1;
//			}
//			if (i <= n - 2)
//			{
//				if (matrix[i][j] == matrix[i + 1][j] && matrix[i + 1][j] == matrix[i + 2][j])//同一列3个相同
//					erase[i][j] = erase[i + 1][j] = erase[i + 2][j] = 1;
//			}
//		}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//			cout << ((erase[i][j]==1) ? 0 : matrix[i][j]) << ' ';
//		cout << endl;
//	}
//}