//#include<vector>
//#include<queue>
//using namespace std;
//struct Node
//{
//	int v;
//	int cost;
//	Node() {};
//	Node(int v1, int cost1) :v(v1), cost(cost1) {};
//};
//bool operator<(const Node &node1, const Node &node2)
//{
//	return node1.cost > node2.cost;
//}
//class Solution {
//public:
//	int networkDelayTime(vector<vector<int>>& times, int N, int K) {
//		vector<vector<Node> > G(N + 1);
//		for (int i = 0; i < times.size(); i++)
//		{
//			G[times[i][0]].push_back(Node(times[i][1], times[i][2]));
//		}
//		vector<int> lenth(N + 1, 0x3f3f3f3f);
//		vector<bool> visited(N + 1, 0);
//		lenth[K] = 0;
//		priority_queue<Node> q;
//		q.push(Node(K, 0));
//		while (!q.empty())
//		{
//			Node top = q.top(); q.pop();
//			if (!visited[top.v])
//			{
//				visited[top.v] = true;
//				for (int i = 0; i < G[top.v].size(); i++)
//				{
//					if (!visited[G[top.v][i].v])
//					{
//						if (lenth[top.v] + G[top.v][i].cost < lenth[G[top.v][i].v])
//						{
//							lenth[G[top.v][i].v] = lenth[top.v] + G[top.v][i].cost;
//							q.push(Node(G[top.v][i].v, lenth[G[top.v][i].v]));
//						}
//					}
//				}
//			}
//		}
//		int time = 0;
//		for (int i = 1; i <= N; i++)
//		{
//			if (time < lenth[i])
//				time = lenth[i];
//		}
//		if (time == 0x3f3f3f3f) return -1;
//		return time;
//	}
//};