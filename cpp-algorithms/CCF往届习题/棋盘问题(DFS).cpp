//#include<iostream>
//#include<vector>
//using namespace std;
//char matrix[9][9];
//int visited[9];
//int n, k;
//bool isOK(int row, int col)//判断第row行第col列能否安放棋子
//{
//	for (int i = row - 1; i >= 0; i++)
//		if (col == visited[i]) return false;
//	return true;
//}
//int DFS(int row,int k)
//{
//	if (k == 0) return 1;
//	if (n - row < k) return 0;//余下的棋盘行数小于未安放的棋子数
//	int sum = 0;
//	for(int i=row;i<n;i++)
//		for (int j = 0; j < n; j++)
//		{
//			if (matrix[i][j] == '#'&&isOK(i, j))//安放一颗棋子
//			{
//				visited[i] = j;
//				sum += DFS(i + 1, k - 1);
//				visited[i] = -1;
//			}
//		}
//	return sum;
//}
//int main(void)
//{
//	
//	while (true)
//	{
//		cin >> n >> k;
//		if (n == -1 && k == -1) break;
//		for (int i = 0; i < 9; i++) visited[i] = -1;
//		/*录入棋盘*/
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				cin >> matrix[i][j];
//		cout << DFS(0,k) << endl;
//	}
//}