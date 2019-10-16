//#include<iostream>
//#include<vector>	
//#include<algorithm>
//using namespace std;
//struct Node
//{
//	int a, b, c;
//	Node() {};
//	Node(int a1, int b1, int c1) :a(a1), b(b1), c(c1) {};
//	bool operator<(const Node &node)
//	{
//		return c < node.c;
//	}
//};
//vector<int> root(100004, -1);
//vector<Node> v;//保存所有的路段
//int find(int x)
//{
//	if (root[x] == -1) return x;
//	else return root[x] = find(root[x]);
//}
//int n, m;
//int Kruskal()
//{
//	for (int i = 0; i < v.size(); i++)
//	{
//		//cout << v[i].a << ' ' << v[i].b << ' ' << v[i].c << endl;
//		int roota, rootb;
//		roota = find(v[i].a); rootb = find(v[i].b);
//		if (roota == rootb)
//		{
//			continue;
//		}
//		else
//		{
//			root[roota] = rootb;
//		}
//		if (find(1) == find(n))
//			return v[i].c;
//	}
//}
//int main(void)
//{
//	
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		v.push_back(Node(a, b, c));
//	}
//	sort(v.begin(), v.end());
//	cout << Kruskal();
//	return 0;
//}