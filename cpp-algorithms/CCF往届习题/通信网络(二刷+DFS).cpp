//#include<iostream>
//#include<vector>
//#include<memory.h>
//using namespace std;
//int visited[1004];
//bool know[1004][1004];//know[i][j]表示部门i知道部门j的存在
//vector<int> G[1004];//邻接表表示图
//int n, m;
//void DFS(int s,int root)
//{
//	visited[s] = true;
//	for (int i = 0; i < G[s].size(); i++)
//	{
//		int adjv = G[s][i];//s的第i个邻接点
//		if (!visited[adjv])
//		{
//			know[root][adjv] = know[adjv][root] = true;
//			DFS(adjv, root);
//		}
//	}
//}
//int main(void)
//{
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		G[a].push_back(b);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		memset(visited, 0, sizeof(visited));
//		DFS(i, i);
//	}
//	int know_others = 1;
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j) continue;
//			if (!know[i][j]) {
//				know_others = 0;
//				break;
//			}
//		}
//		if (know_others == 1) ans++;
//		know_others = 1;
//	}
//	cout << ans << endl;
//	return 0;
//}