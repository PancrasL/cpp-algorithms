//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define INO 0x3f3f3f3f//�����
//using namespace std;
//struct Node
//{
//	int t;//0��ʾ��·��1��ʾС·
//	int v;//�ڽӵ�
//	int cost;//·��
//	Node() {};
//	Node(int &t1, int &v1, int &cost1) :t(t1), v(v1), cost(cost1) {};
//};
//vector<int> path_small(501, INO);//���һ��·��С·ʱ�����i��·�ڵ�ƣ�Ͷ�
//vector<int> path_big(501, INO);////���һ��·�ߴ�·ʱ�����i��·�ڵ�ƣ�Ͷ�
//vector<Node> G[501];//·ʹ���ڽӱ���
//int G_small[501][501];//С·ʹ���ڽӾ��󱣴�
//int n, m;//·����������
//void INITIAL_GRAPH()//��ʼ��ͼ
//{
//	path_small[1] = path_big[1] = 0;
//	/*��ʼ���ڽӾ���*/
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			G_small[i][j] = INO;
//		}
//	/*¼��·*/
//	int t, a, b, c;
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d %d %d %d", &t, &a, &b, &c);
//		if(t) G_small[a][b] = G_small[b][a] = c;//С·
//		G[a].push_back(Node(t, b, c));
//		G[b].push_back(Node(t, a, c));
//	}
//}
//int main(void)
//{
//	cin >> n >> m;
//	INITIAL_GRAPH();
//	/*Floyd�㷨���ֻ��С·ʱ��·�ڼ�ľ���*/
//	for (int v = 1; v <= n; v++)
//		for (int u = 1; u <= n; u++)
//			for (int w = 1; w <= n; w++)
//			{
//				/*ֻ��С·*/
//				int new_cost = G_small[u][v] + G_small[v][w];
//				if (new_cost < G_small[u][w])
//					G_small[u][w] = new_cost;
//			}
//	for (int i = 1; i <= n; i++)
//		path_small[i] = G_small[1][i] * G_small[1][i];
//	path_small[1] = 0;
//	/*BellmanFord�㷨�����ɳڲ���*/
//	for (int i = 1; i < n; i++)//n-1���ɳڲ���
//	{
//		int t, u, v, w;//(u,v)=w
//		for (u = 1; u <= n; u++)
//		{
//			for (int k = 0; k < G[u].size(); k++)
//			{
//				t = G[u][k].t; v = G[u][k].v; w = G[u][k].cost;
//				int new_cost;
//				if (t == 0)//�Ǵ�·
//				{
//					new_cost = path_big[u] + w;
//					if (new_cost < path_big[v])//��·+��·
//						path_big[v] = new_cost;
//					new_cost = path_small[u] + w;
//					if (new_cost < path_big[v])//С·+��·
//						path_big[v] = new_cost;
//				}
//				else //��С·
//				{
//					new_cost = path_big[u] + G_small[u][v] * G_small[u][v];
//					if (new_cost < path_small[v])//��·+С·
//						path_small[v] = new_cost;
//				}
//			}
//		}
//	}
//	cout << min(path_big[n], path_small[n]);
//}