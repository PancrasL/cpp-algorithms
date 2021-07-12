//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<stdio.h>
//using namespace std;
//int N, M;//N个路口，M条边
//vector<int> visited;
//vector<int> cost;
//struct ArcNode
//{
//	int v;
//	int cost;
//	ArcNode() {};
//	ArcNode(int v1, int cost1) :v(v1), cost(cost1) {};
//};
//bool operator<(const ArcNode &node1, const ArcNode &node2)
//{
//	return node1.cost > node2.cost;
//}
//void Dijkstra(vector<vector<ArcNode> > &G,int src)
//{
//	priority_queue<ArcNode> q;
//	cost[src] = 0;
//	q.push(ArcNode(src, 0));
//	while (!q.empty())
//	{
//		ArcNode front;
//		front = q.top(); q.pop();
//		if (!visited[front.v])
//		{
//			if (front.v == N) return;//找到到达终点的路线
//			visited[front.v] = 1;
//			int adjv, adjcost;
//			for (int i = 0; i < G[front.v].size(); i++)//访问所有邻接点
//			{
//				adjv = G[front.v][i].v; adjcost = G[front.v][i].cost;
//				if (visited[adjv]) continue;
//				if (cost[front.v] + adjcost < cost[adjv])
//				{
//					cost[adjv] = cost[front.v] + adjcost;
//				}
//				q.push(ArcNode(adjv, cost[adjv]));
//			}
//		}
//	}
//}
//int main(void)
//{
//	while (true)
//	{
//		scanf("%d %d", &N, &M);
//		if (N == 0 && M == 0) break;
//		vector<vector<ArcNode> > G(N + 1);
//		visited.assign(N + 1, 0);
//		cost.assign(N + 1, INT_MAX);
//		for (int i = 0; i < M; i++)
//		{
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			G[a].push_back(ArcNode(b, c));
//			G[b].push_back(ArcNode(a, c));
//		}
//		Dijkstra(G, 1);
//		cout << cost[N] << endl;
//	}
//}