////codevs 1993
//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
//const int INF = 0x7ffffff;
//
//int n, m;//n�ǽڵ�����m�Ǳ�����1��Դ�㣬n�ǻ��
//vector<int> pre(201, -1);//bfsʱ����ǰ�����
//vector<int> flow(201);//flow[i]��ʾԴ�㵽���i������ 
//int g[201][201], maxflow;
//
//int bfs(int s, int t)
//{
//	queue <int> q;
//	pre.assign(201, -1);//�ÿ�
//	pre[s] = 0;
//	q.push(s);
//	flow[s] = INF;//��ʼ���������
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//		if (x == t) break;//������
//		for (int i = 1; i <= n; i++)
//			//EKһ��ֻ��һ������· 
//			if (g[x][i] > 0 && pre[i] == -1)
//			{
//				pre[i] = x;
//				flow[i] = min(flow[x], g[x][i]);
//				q.push(i);
//			}
//	}
//	if (pre[t] == -1) return -1;//δ�ҵ��������·��
//	else return flow[t];
//}
//
////increaseΪ��������� 
//void EK(int s, int t)
//{
//	int increase = 0;
//	while ((increase = bfs(s, t)) != -1)//bfs��ȡһ������·��
//	{//���� 
//		int k = t;
//		while (k != s)//�ӻ����ݵ�Դ��
//		{
//			int last = pre[k];//�Ӻ���ǰ��·��
//			g[last][k] -= increase;
//			g[k][last] += increase;
//			k = last;
//		}
//		maxflow += increase;
//	}
//}
//
//int main()
//{
//	cin >> m >> n;//�������ڵ���
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;//(a,b)=c
//		g[a][b] += c;//�˴�����ֱ�����룬Ҫ+=�����ܴ��ڶ��ر�
//	}
//	EK(1, n);
//	printf("%d", maxflow);
//	return 0;
//}