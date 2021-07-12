//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define INO 0x3f3f3f3f//�����
//using namespace std;
//struct Node
//{
//	int v;//�ڽӵ�
//	int cost;//·��
//	Node() {};
//	Node(int v1, int cost1) :v(v1), cost(cost1) {};
//};
//vector<int> path_small(501, INO);//���һ��·��С·ʱ�����i��·�ڵ�ƣ�Ͷ�
//vector<int> path_big(501, INO);////���һ��·�ߴ�·ʱ�����i��·�ڵ�ƣ�Ͷ�
//int G_big[501][501];//��·ʹ���ڽӾ��󱣴�
//int G_small[501][501];//С·ʹ���ڽӾ��󱣴�
//int n, m;//·����������
//void INITIAL_GRAPH()//��ʼ��ͼ
//{
//	path_small[1] = path_big[1] = 0;
//	/*��ʼ���ڽӾ���*/
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			G_big[i][j] = G_small[i][j] = INO;
//		}
//	/*¼��·*/
//	int t, a, b, c;
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d %d %d %d", &t, &a, &b, &c);
//		if (t == 0)//��·
//		{
//			G_big[a][b] = G_big[b][a] = c;
//		}
//		else G_small[a][b] = G_small[b][a] = c;//С·
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
//				int temp = G_small[u][v] + G_small[v][w];
//				if (temp < G_small[u][w])
//					G_small[u][w] = temp;
//			}
//	/*BellmanFord�㷨�����ɳڲ���*/
//	for (int i = 1; i < n; i++)//n-1���ɳڲ���
//	{
//		for (int u = 1; u <= n; u++)
//		{
//			for (int v = 1; v <= n; v++)
//			{
//				int temp;
//				if (G_big[u][v] != INO)
//				{
//					temp = path_big[u] + G_big[u][v];
//					if (temp < path_big[v])//��·+��·
//						path_big[v] = temp;
//					temp = path_small[u] + G_big[u][v];
//					if (temp < path_big[v])//С·+��·
//						path_big[v] = temp;
//				}
//				if (G_small[u][v] != INO)//��·+С·
//				{
//					temp = path_big[u] + G_small[u][v] * G_small[u][v];
//					if (temp < path_small[v])
//						path_small[v] = temp;
//				}
//			}
//		}
//	}
//	cout << min(path_big[n], path_small[n]);
//}