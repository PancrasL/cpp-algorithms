//#define _CRT_SECURE_NO_WARNINGS
//#include<vector>
//#include<stdio.h>
//#include<queue>
//#include<iostream>
//using namespace std;
//struct ArcNode {
//	int v;//邻接点
//	int len;//长度
//	int cost;//花费
//	ArcNode() {};
//	ArcNode(int v1, int len1, int cost1) :v(v1), len(len1), cost(cost1) {};
//};
//struct GNode {
//	int v;//结点v
//	int len;//源点到结点v的距离
//	int cost;//源点到结点v的花费
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
//int s, t;//起点s，终点t
//vector<int> visited;//标记结点是否被访问
//vector<int> len;//len[v]表示源点到结点v的距离
//vector<int> cost;//cost[v]表示源点到结点v的花费
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
//		if (visited[front.v]) continue;//结点已被访问
//		visited[front.v] = 1;
//		//special
//		if (front.v == t)//已经获取到终点的路径长度
//		{
//			return;
//		}//special
//		for (int i = 0; i < G[front.v].size(); i++)//访问v的所有邻接点
//		{
//			int adjv = G[front.v][i].v; //v的第i个邻接点
//			int adjlen = G[front.v][i].len;
//			int adjcost = G[front.v][i].cost;
//			if (!visited[adjv])//若v的第i个邻接点未被访问
//			{
//
//				if (len[front.v] + adjlen < len[adjv])//有更短的路径，更新len和cost
//				{
//					len[adjv] = len[front.v] + adjlen;
//					cost[adjv] = cost[front.v] + adjcost;
//				}
//				else if (len[front.v] + adjlen == len[adjv])//路径一样长，选择cost小的那一条路
//				{
//					if (cost[front.v] + adjcost < cost[adjv])
//						cost[adjv] = cost[front.v] + adjcost;//若需要前驱结点也要更新
//				}
//				q.push(GNode(adjv, len[adjv], cost[adjv]));
//			}
//		}
//	}
//}
//int main(void)
//{
//	int n, m;//节点数，边数
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
//			int a, b, d, p;//边(a,b)长d，花费p
//			scanf("%d %d %d %d", &a, &b, &d, &p);
//			G[a].push_back(ArcNode(b, d, p));
//			G[b].push_back(ArcNode(a, d, p));
//		}
//		scanf("%d %d", &s, &t);
//		Dijkstra(G);
//		printf("%d %d\n", len[t], cost[t]);
//	}
//}