//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//struct Node
//{
//	int v;
//	int length;
//	Node() {};
//	Node(int v1, int length1) :v(v1), length(length1) {};
//};
//struct QNode
//{
//	int v;
//	int len;
//	int cost;
//	QNode() {};
//	QNode(int v1, int len1, int cost1) :v(v1), len(len1), cost(cost1) {};
//};
//bool operator<(const QNode &node1, const QNode &node2)
//{
//	if (node1.len == node2.len)
//		return node1.cost > node2.cost;
//	return node1.len > node2.len;
//}
//int n, m;//城市数量，铁路数量
//int totalcost;//总花费
//vector<int> lenth(10001, 0x3f3f3f3f);
//vector<bool> visited(10001, 0);//标记结点是否被访问
//void Dijkstra(vector<vector<Node> > &G, int src)
//{
//	lenth[src] = 0;
//	priority_queue<QNode> q;
//	q.push(QNode(src, 0, 0));//源点入队
//	while (!q.empty())
//	{
//		QNode front = q.top(); q.pop();
//		if (!visited[front.v])
//		{
//			visited[front.v] = true; totalcost += front.cost;
//			for (int i = 0; i < G[front.v].size(); i++)
//			{
//				if (!visited[G[front.v][i].v])
//				{
//					if (lenth[front.v] + G[front.v][i].length <= lenth[G[front.v][i].v])
//					{
//						lenth[G[front.v][i].v] = lenth[front.v] + G[front.v][i].length;
//						q.push(QNode(G[front.v][i].v, lenth[G[front.v][i].v], G[front.v][i].length));
//					}
//				}
//			}
//		}
//	}
//}
//int main(void)
//{
//	cin >> n >> m;
//	vector<vector<Node> > G(n + 1);
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		G[a].push_back(Node(b, c));
//		G[b].push_back(Node(a, c));
//	}
//	Dijkstra(G, 1);
//	cout << totalcost << endl;
//}