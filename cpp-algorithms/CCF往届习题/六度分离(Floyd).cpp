//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<memory.h>
//using namespace std;
//int G[101][101];
//int N, M;//人数，关系数
//void Flyd()
//{
//	for(int u=0;u<N;u++)
//		for(int v=0;v<N;v++)
//			for (int w = 0; w < N; w++)
//			{
//				if (G[v][u] != INT_MAX && G[u][w] != INT_MAX)
//				{
//					if (G[v][u] + G[u][w] < G[v][w])
//						G[v][w] = G[v][u] + G[u][w];
//				}
//			}
//}
//int main(void)
//{
//	while (cin >> N >> M)
//	{
//		/*初始化图*/
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				if (i == j) G[i][j] = 0;
//				else G[i][j] = INT_MAX;
//			}
//		}
//		/*录入图*/
//		for (int i = 0; i < M; i++)
//		{
//			int a, b;
//			scanf("%d %d", &a, &b);
//			G[a][b] = 1;
//			G[b][a] = 1;
//		}
//		/*求连通性*/
//		Flyd();
//		int isOK = 1;
//		for (int i = 0; i < N&&isOK; i++)
//			for (int j = 0; j < N&&isOK; j++)
//				if (G[i][j] > 7)
//				{
//					isOK = 0;
//				}
//		if (isOK)
//			cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//}