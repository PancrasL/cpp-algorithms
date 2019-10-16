//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Node
//{
//	int a;
//	int b;
//	int cost;
//	Node() {};
//	Node(int a1, int b1, int cost1) :a(a1), b(b1), cost(cost1){};
//	bool operator<(Node &temp) {
//		return cost < temp.cost;
//	}
//};
//int find(vector<int> &root, int x)
//{
//	if (root[x] == -1) return x;
//	else return root[x] = find(root, root[x]);
//}
//int main(void)
//{
//	int N;
//	while (cin >> N)
//	{
//		if (N == 0) break;
//		vector<Node> Arc;
//		vector<int> root(N + 1, -1);
//		int num=0;
//		for (int i = 1; i <= N * (N - 1) / 2; i++)
//		{
//			int a, b, c, d;
//			scanf("%d %d %d %d", &a, &b, &c, &d);
//			if(d==0)
//				Arc.push_back(Node(a, b, c));
//			else
//			{
//				int roota, rootb;
//				roota = find(root, a); rootb = find(root, b);
//				if (roota == rootb)
//					continue;
//				else
//				{
//					root[roota] = rootb;
//					num++;//增加一条连通边
//				}
//			}
//		}
//		if (num == N - 1)//已经连通了
//		{
//			cout << 0 << endl;
//			continue;
//		}
//		sort(Arc.begin(), Arc.end());
//		int sum = 0;
//		for (int i = 0; i < Arc.size(); i++)
//		{
//			int roota, rootb;
//			roota = find(root, Arc[i].a); rootb = find(root, Arc[i].b);
//			if (roota != rootb)
//			{
//				sum += Arc[i].cost;
//				root[roota] = rootb;
//				num++;
//				if (num == N - 1) break;
//			}
//		}
//		cout << sum << endl;
//	}
//}