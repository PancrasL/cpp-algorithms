//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct Node
//{
//	int a, b, cost;
//	Node() {};
//	Node(int a1, int b1, int cost1) :a(a1), b(b1), cost(cost1) {};
//	bool operator<(Node x)
//	{
//		return cost < x.cost;
//	}
//};
//int find(vector<int> &root, int x)
//{
//	if (root[x] == -1) return x;
//	else return root[x] = find(root, root[x]);
//}
//int N;
//int main(void)
//{
//	while (true)
//	{
//		cin >> N;
//		if (N == 0) break;
//		vector<Node> Arc;
//		vector<int> root(N + 1, -1);
//		for (int i = 0; i < N*(N - 1) / 2; i++)
//		{
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			Arc.push_back(Node(a, b, c));
//		}
//		sort(Arc.begin(), Arc.end());
//		int num = 0;//已经添加的边数
//		int sum = 0;//公路总长度
//		for (int i = 0; i < Arc.size(); i++)
//		{
//			int roota, rootb;
//			roota = find(root, Arc[i].a);
//			rootb = find(root, Arc[i].b);	
//			if (roota != rootb)
//			{
//				root[roota] = rootb;
//				sum += Arc[i].cost;
//				num++;
//				if (num == N - 1) break;
//			}
//		}
//		cout << sum << endl;
//	}
//}