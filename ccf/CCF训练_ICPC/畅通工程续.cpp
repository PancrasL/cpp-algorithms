//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//struct ArcNode
//{
//	int v;
//	int cost;
//	ArcNode() {};
//	ArcNode(int v1, int cost1) :v(v1), cost(cost1) {};
//};
//bool operator<(const ArcNode& node1, const ArcNode& node2)
//{
//	return node1.cost > node2.cost;
//}
//vector<int> cost;
//vector<int> visited;
//int N, M;//�ڵ���������(0����N-1��ţ�
//int S, T;//��㡢�յ�
//void Dijkstra(vector<vector<ArcNode> > &G)
//{
//	cost[S] = 0;//��ʼ��Դ��
//	priority_queue<ArcNode> q;
//	q.push(ArcNode(S, 0));//Դ�����
//	while (!q.empty())
//	{
//		ArcNode front = q.top();
//		q.pop();
//		if (!visited[front.v])
//		{
//			visited[front.v] = 1;
//			if (front.v == T) return;//�����յ�
//			int adjv, adjcost;
//			for (int i = 0; i < G[front.v].size(); i++)
//			{
//				if (visited[G[front.v][i].v]) continue;//�����ѷ��ʵĽ��
//				adjv = G[front.v][i].v;
//				adjcost = G[front.v][i].cost;
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
//	while (cin >> N >> M)
//	{
//		vector<vector<ArcNode> > G(N);
//		cost.assign(N, INT_MAX);
//		visited.assign(N, 0);
//		for (int i = 0; i < M; i++)
//		{
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			G[a].push_back(ArcNode(b, c));
//			G[b].push_back(ArcNode(a, c));
//		}
//		scanf("%d %d", &S, &T);
//		Dijkstra(G);
//		if (cost[T] == INT_MAX)
//			cout << -1 << endl;
//		else cout << cost[T] << endl;
//	}
//}