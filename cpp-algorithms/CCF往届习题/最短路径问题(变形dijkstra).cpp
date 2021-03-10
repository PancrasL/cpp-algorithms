//#define _CRT_SECURE_NO_WARNINGS
//#include<vector>
//#include<stdio.h>
//#include<queue>
//#include<iostream>
//using namespace std;
//struct ArcNode {
//	int v;//�ڽӵ�
//	int len;//����
//	int cost;//����
//	ArcNode() {};
//	ArcNode(int v1, int len1, int cost1) :v(v1), len(len1), cost(cost1) {};
//};
//struct GNode {
//	int v;//���v
//	int len;//Դ�㵽���v�ľ���
//	int cost;//Դ�㵽���v�Ļ���
//	GNode() {};
//	GNode(int v1, int len1, int cost1) :v(v1), len(len1), cost(cost1) {};
//	friend bool operator<(const GNode &node1, const GNode &node2);
//
//};
//bool operator<(const GNode &node1, const GNode &node2)
//{
//	if (node1.len == node2.len)
//		return node1.cost > node2.cost;
//	return node1.len > node2.len;
//}
//int s, t;//���s���յ�t
//vector<int> visited;//��ǽ���Ƿ񱻷���
//vector<int> len;//len[v]��ʾԴ�㵽���v�ľ���
//vector<int> cost;//cost[v]��ʾԴ�㵽���v�Ļ���
//void Dijkstra(vector<vector<ArcNode> > &G)
//{
//	priority_queue<GNode> q;
//	len[s] = 0;
//	cost[s] = 0;
//	q.push(GNode(s, 0, 0));
//	while (!q.empty())
//	{
//		GNode front;
//		front = q.top(); q.pop();
//		if (visited[front.v]) continue;//����ѱ�����
//		visited[front.v] = 1;
//		//special
//		if (front.v == t)//�Ѿ���ȡ���յ��·������
//		{
//			return;
//		}//special
//		for (int i = 0; i < G[front.v].size(); i++)//����v�������ڽӵ�
//		{
//			int adjv = G[front.v][i].v; //v�ĵ�i���ڽӵ�
//			int adjlen = G[front.v][i].len;
//			int adjcost = G[front.v][i].cost;
//			if (!visited[adjv])//��v�ĵ�i���ڽӵ�δ������
//			{
//
//				if (len[front.v] + adjlen < len[adjv])//�и��̵�·��������len��cost
//				{
//					len[adjv] = len[front.v] + adjlen;
//					cost[adjv] = cost[front.v] + adjcost;
//				}
//				else if (len[front.v] + adjlen == len[adjv])//·��һ������ѡ��costС����һ��·
//				{
//					if (cost[front.v] + adjcost < cost[adjv])
//						cost[adjv] = cost[front.v] + adjcost;//����Ҫǰ�����ҲҪ����
//				}
//				q.push(GNode(adjv, len[adjv], cost[adjv]));
//			}
//		}
//	}
//}
//int main(void)
//{
//	int n, m;//�ڵ���������
//	while (true)
//	{
//		scanf("%d %d", &n, &m);
//		if (n == 0 && m == 0) break;
//		vector<vector<ArcNode> >G(n + 1);
//		visited.assign(n + 1, 0);
//		len.assign(n + 1, INT_MAX);
//		cost.assign(n + 1, INT_MAX);
//		for (int i = 0; i < m; i++)
//		{
//			int a, b, d, p;//��(a,b)��d������p
//			scanf("%d %d %d %d", &a, &b, &d, &p);
//			G[a].push_back(ArcNode(b, d, p));
//			G[b].push_back(ArcNode(a, d, p));
//		}
//		scanf("%d %d", &s, &t);
//		Dijkstra(G);
//		printf("%d %d\n", len[t], cost[t]);
//	}
//}