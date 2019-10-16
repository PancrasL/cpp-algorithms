//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<memory.h>
//using namespace std;
//char matrix[101][101];
//bool visited[101][101];
//int m, n, q;
//void DFS(int i, int j, char c)
//{
//	if (matrix[i][j] == '-' || matrix[i][j] == '+' || matrix[i][j] == '|') return;
//	matrix[i][j] = c;
//	visited[i][j] = true;
//	if (i - 1 >= 0 && !visited[i - 1][j]) DFS(i - 1, j, c);//ÉÏ
//	if (i + 1 <= n && !visited[i + 1][j]) DFS(i + 1, j, c);//ÏÂ
//	if (j - 1 >= 0 && !visited[i][j - 1]) DFS(i, j - 1, c);//×ó
//	if (j + 1 <= m && !visited[i][j + 1]) DFS(i, j + 1, c);//ÓÒ
//}
//int main(void)
//{
//	cin >> m >> n >> q;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			matrix[i][j] = '.';
//	int op;
//	for (int i = 0; i < q; i++)
//	{
//		cin >> op;
//		if (op == 0)//»­Ïß
//		{
//			int x1, y1, x2, y2;
//			cin >> x1 >> y1 >> x2 >> y2;
//			if (y1!=y2)//»­ÊúÏß
//			{
//				if (y1 > y2) swap(y1, y2);
//				for (int j = y1; j <= y2; j++)
//				{
//					if (matrix[j][x1] == '-') matrix[j][x1] = '+';
//					else if (matrix[j][x1] == '+');
//					else matrix[j][x1] = '|';
//				}
//			}
//			else//»­ºáÏß
//			{
//				if (x1 > x2) swap(x1, x2);
//				for (int j = x1; j <= x2; j++)
//				{
//					if (matrix[y1][j] == '|') matrix[y1][j] = '+';
//					else if (matrix[y1][j] == '+');
//					else matrix[y1][j] = '-';
//				}
//			}
//		}
//		else//»­Í¼
//		{
//			int x, y; char c;
//			cin >> x >> y >> c;
//			memset(visited, 0, sizeof(visited));
//			DFS(y, x, c);
//		}
//	}
//	for (int i = n - 1; i >= 0; i--)
//	{
//		for (int j = 0; j < m; j++)
//			cout << matrix[i][j];
//		cout << endl;
//	}
//	return 0;
//}