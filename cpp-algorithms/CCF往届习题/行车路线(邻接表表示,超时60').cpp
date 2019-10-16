//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define INO 0x3f3f3f3f//无穷大
//using namespace std;
//struct Node
//{
//	int t;//0表示大路，1表示小路
//	int v;//邻接点
//	int cost;//路长
//	Node() {};
//	Node(int &t1, int &v1, int &cost1) :t(t1), v(v1), cost(cost1) {};
//};
//vector<int> path_small(501, INO);//最后一段路走小路时到达第i个路口的疲劳度
//vector<int> path_big(501, INO);////最后一段路走大路时到达第i个路口的疲劳度
//vector<Node> G[501];//路使用邻接表保存
//int G_small[501][501];//小路使用邻接矩阵保存
//int n, m;//路口数，边数
//void INITIAL_GRAPH()//初始化图
//{
//	path_small[1] = path_big[1] = 0;
//	/*初始化邻接矩阵*/
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			G_small[i][j] = INO;
//		}
//	/*录入路*/
//	int t, a, b, c;
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d %d %d %d", &t, &a, &b, &c);
//		if(t) G_small[a][b] = G_small[b][a] = c;//小路
//		G[a].push_back(Node(t, b, c));
//		G[b].push_back(Node(t, a, c));
//	}
//}
//int main(void)
//{
//	cin >> n >> m;
//	INITIAL_GRAPH();
//	/*Floyd算法求出只走小路时两路口间的距离*/
//	for (int v = 1; v <= n; v++)
//		for (int u = 1; u <= n; u++)
//			for (int w = 1; w <= n; w++)
//			{
//				/*只走小路*/
//				int new_cost = G_small[u][v] + G_small[v][w];
//				if (new_cost < G_small[u][w])
//					G_small[u][w] = new_cost;
//			}
//	for (int i = 1; i <= n; i++)
//		path_small[i] = G_small[1][i] * G_small[1][i];
//	path_small[1] = 0;
//	/*BellmanFord算法进行松弛操作*/
//	for (int i = 1; i < n; i++)//n-1次松弛操作
//	{
//		int t, u, v, w;//(u,v)=w
//		for (u = 1; u <= n; u++)
//		{
//			for (int k = 0; k < G[u].size(); k++)
//			{
//				t = G[u][k].t; v = G[u][k].v; w = G[u][k].cost;
//				int new_cost;
//				if (t == 0)//是大路
//				{
//					new_cost = path_big[u] + w;
//					if (new_cost < path_big[v])//大路+大路
//						path_big[v] = new_cost;
//					new_cost = path_small[u] + w;
//					if (new_cost < path_big[v])//小路+大路
//						path_big[v] = new_cost;
//				}
//				else //是小路
//				{
//					new_cost = path_big[u] + G_small[u][v] * G_small[u][v];
//					if (new_cost < path_small[v])//大路+小路
//						path_small[v] = new_cost;
//				}
//			}
//		}
//	}
//	cout << min(path_big[n], path_small[n]);
//}