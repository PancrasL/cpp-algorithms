//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> visited;
//int n, k;
//int DFS(int row, int col,vector<vector<char> > &v,int num)
//{	
//	if (num == 0) return 1;
//	if (n - row + 1 < num) return 0;//剩下的棋盘行数小于未放的棋子数
//	int ans = 0;//统计方案数
//	for(int i=row;i<=n;i++)
//		for (int j = 1; j <= n; j++)
//		{
//			if (v[i][j] == '#'&&visited[j] == 0)
//			{
//				visited[j] = 1;
//				ans += DFS(i + 1, 1, v, num - 1);
//				visited[j] = 0;
//			}
//		}
//	return ans;
//}
//int main(void)
//{
//	while (cin>>n>>k)
//	{
//		if (n == -1 && k == -1) break;
//		vector<vector<char> > matrix(n+1);
//		for (int i = 1; i <= n; i++)//初始化n*n的棋盘
//			matrix[i].assign(n+1, 0);
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				cin >> matrix[i][j];
//		int ans = 0;
//		for(int i=1;i<=n-k+1;i++)//放k个棋子，第一个棋子最多放到第n-k+1行
//			for (int j = 1; j <= n; j++)
//			{
//				visited.assign(9, 0);//标记某一列是否有棋子
//				if (matrix[i][j] == '#')
//				{
//					visited[j] = 1;
//					ans += DFS(i + 1, 1, matrix, k - 1);//寻找下一个棋子的位置,并返回方案数
//					visited[j] = 0;
//				}
//			}
//		cout << ans << endl;
//	}
//}