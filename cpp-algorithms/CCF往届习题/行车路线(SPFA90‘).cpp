//#include<iostream>
//#include<queue>
//using namespace std;
//#define MAX_VEX 501
//#define MAX 1000000
//int vex_num, arc_num;
//int G[MAX_VEX][MAX_VEX], G1[MAX_VEX][MAX_VEX];//��·��С·
//int dis[MAX_VEX], dis1[MAX_VEX];//��·ƣ��ֵ��С·ƣ��ֵ
//int in_queue[MAX_VEX];//����ڶ����еĶ���
//void SPFA(int source);
//int main()
//{
//	scanf("%d %d", &vex_num, &arc_num);
//	int i, j;//ѭ��
//	//��ʼ��ͼ
//	for (i = 1; i <= vex_num; i++)
//		for (j = 1; j <= vex_num; j++)
//		{
//			if (i == j) G[i][j] = G1[i][j] = 0;
//			else G[i][j] = G1[i][j] = MAX;
//		}
//	//����ͼ
//	int t, a, b, c;//��
//	while (arc_num--)
//	{
//		scanf("%d %d %d %d", &t, &a, &b, &c);
//		if (t)//С·
//			G1[a][b] = G1[b][a] = c;
//		else G[a][b] = G[b][a] = c;
//	}
//	//FORD�㷨����ֻ��С·ʱ����������
//	int u, v, w;
//	for (u = 1; u <= vex_num; u++)
//		for (v = 1; v <= vex_num; v++)
//			for (w = 1; w <= vex_num; w++)
//			{
//				if (G1[v][u] + G1[u][w] < G1[v][w])
//					G1[v][w] = G1[v][u] + G1[u][w];
//			}
//	SPFA(1);//����1��·�ڵ���·��������Сƣ�Ͷ�
//	printf("%d", min(dis[vex_num], dis1[vex_num]));
//	//system("pause");
//	return 0;
//}
//void SPFA(int source)
//{
//	queue<int> Q;
//	int i;
//	for (i = 1; i <= vex_num; i++)
//	{
//		dis[i] = dis1[i] = MAX;
//		in_queue[i] = 0;
//	}
//
//	dis[source] = dis1[source] = 0;
//	Q.push(source);
//	in_queue[source] = 1;
//	while (!Q.empty())
//	{
//		int u, v;
//		u = Q.front();
//		Q.pop();
//		in_queue[u] = 0;
//		for (v = 1; v <= vex_num; v++)//�ɳڲ���
//		{
//			if (u == v) continue;
//			if (dis[u] + G[u][v] < dis[v])//��·+��·
//			{
//				dis[v] = dis[u] + G[u][v];
//				if (!in_queue[v])
//				{
//					Q.push(v);
//					in_queue[v] = 1;
//				}
//			}
//			if (G1[u][v] != MAX)//������u��v��С·
//				if (dis[u] + G1[u][v] * G1[u][v] < dis1[v])//��·+С·
//				{
//					dis1[v] = G1[u][v] * G1[u][v] + dis[u];
//					if (!in_queue[v])
//					{
//						Q.push(v);
//						in_queue[v] = 1;
//					}
//				}
//			if (dis1[u] + G[u][v] < dis[v])//С·+��·
//			{
//				dis[v] = dis1[u] + G[u][v];
//				if (!in_queue[v])
//				{
//					Q.push(v);
//					in_queue[v] = 1;
//				}
//			}
//		}
//	}
//}