//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Node
//{
//	int a, b;
//	int cost;
//	Node() {};
//	Node(int a1, int b1, int cost1) :a(a1), b(b1), cost(cost1) {};
//};
//bool operator<(const Node &node1, const Node &node2)
//{
//	return node1.cost > node2.cost;
//}
//int n, m, r;
//vector<int> root(50001, -1);
//int find(int x)
//{
//	if (root[x] == -1) return x;
//	else return root[x] = find(root[x]);
//}
//int Kruskal(vector<Node> &Arc)
//{
//	int cnt = 0;
//	for (int i = 0; i < Arc.size(); i++)
//	{
//		int roota, rootb;
//		roota = find(Arc[i].a); rootb = find(Arc[i].b);
//		if (roota == rootb) continue;
//		else
//		{
//			root[roota] = rootb;
//			cnt++;
//		}
//		if (cnt == n - 1) return Arc[i].cost;
//	}
//}
//int main(void)
//{
//	cin >> n >> m >> r;
//	vector<Node> Arc(m);
//	for (int i = 0; i < m; i++)
//	{
//		cin >> Arc[i].a >> Arc[i].b >> Arc[i].cost;
//	}
//	sort(Arc.begin(), Arc.end());
//	cout << Kruskal(Arc) << endl;
//	return 0;
//}