//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stdio.h>
//using namespace std;
//struct node
//{
//	int a, b;
//	int cost;
//	node() {};
//	node(int &a1, int &b1, int &cost1) : a(a1), b(b1), cost(cost1) {};
//	bool operator<(node &node)
//	{
//		return cost < node.cost;
//	}
//};
//int find(vector<int> &root, int x)
//{
//	if (root[x] == -1)
//		return x;
//	else
//		return root[x] = find(root, root[x]);
//}
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	vector<int> root(n + 1, -1);
//	vector<node> g(m);
//	int i;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d %d %d", &g[i].a, &g[i].b, &g[i].cost);
//	}
//	sort(g.begin(), g.end());
//	int num = 0;
//	int total_cost = 0;
//	for (int i = 0; i < g.size(); i++)
//	{
//		int roota, rootb;
//		roota = find(root, g[i].a);
//		rootb = find(root, g[i].b);
//		if (roota == rootb)
//			continue;
//		else
//		{
//			root[roota] = rootb;
//			total_cost += g[i].cost;
//			num++;
//			if (num == n - 1) break;
//		}
//	}
//	cout << total_cost << endl;
//}