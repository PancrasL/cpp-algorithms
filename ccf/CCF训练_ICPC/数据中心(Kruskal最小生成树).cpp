//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int n, m, r;
//struct Node
//{
//	int a, b;
//	int cost;
//	Node() {};
//	Node(int a1, int b1, int cost1) :a(a1), b(b1), cost(cost1) {};
//	bool operator<(const Node &node)
//	{
//		return cost < node.cost;
//	}
//};
//int find(vector<int> &root, int x)
//{
//	if (root[x] == -1) return x;
//	else return root[x] = find(root, root[x]);
//}
//int Kruskal(vector<Node> &Arc)
//{
//	vector<int> root(n + 1, -1);
//	int cnt = 0;
//	for (int i = 0; i < Arc.size(); i++)
//	{
//		int roota, rootb;
//		roota = find(root, Arc[i].a); rootb = find(root, Arc[i].b);
//		if (roota == rootb) continue;
//		root[roota] = rootb;
//		cnt++;
//		if (cnt == n - 1) return Arc[i].cost;
//	}
//}
//int main(void)
//{
//	cin >> n >> m >> r;
//	vector<Node> Arc;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		Arc.push_back(Node(a, b, c));
//	}
//	sort(Arc.begin(), Arc.end());
//	cout << Kruskal(Arc);
//	return 0;
//}