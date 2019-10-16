//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<memory.h>
//using namespace std;
//bool know[1001][1001];//know[i][j]表示部门i知道部门j的存在
//bool visited[1001];//用于DFS时标记访问的结点
//int N, M;
//void DFS(vector<vector<int> > &G, int src,int root)//DFS结点src能到达哪些点
//{
//	visited[src] = true;
//	for (int i = 0; i < G[src].size(); i++)
//	{
//		int adjv = G[src][i];
//		if (!visited[adjv])
//		{
//			know[root][adjv] = know[adjv][root] = true;
//			DFS(G, adjv, root);
//		}
//	}
//}
//int main(void)
//{
//	cin >> N >> M;
//	vector<vector<int> > G(N + 1);//保存图
//	for (int i = 1; i <= M; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		G[a].push_back(b);
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		memset(visited, 0, sizeof(visited));
//		DFS(G, i, i);
//	}
//	int flag = 0, ans = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			if (i == j) continue;
//			else if (know[i][j] == false)//部门i不知道部门j的存在
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (!flag) ans++;
//		flag = 0;
//	}
//	cout << ans << endl;
//	return 0;
//}