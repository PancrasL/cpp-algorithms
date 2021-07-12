//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//struct Node
//{
//	int a;
//	int b;
//	int cost;
//	Node() {};
//	Node(int a1, int b1, int c1) :a(a1), b(b1), cost(c1) {};
//	bool operator<(Node &p)
//	{
//		return cost < p.cost;
//	}
//};
//int N, M;
//int find(vector<int> &root, int x)
//{
//	if (root[x] == -1) return x;
//	else return root[x] = find(root, root[x]);
//}
//int main(void)
//{
//	while (true)
//	{
//		cin >> N >> M;
//		if (N == 0) break;
//		vector<Node> Arc;
//		for (int i = 0; i < N; i++)
//		{
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			Arc.push_back(Node(a, b, c));
//		}
//		sort(Arc.begin(), Arc.end());
//		vector<int> root(M + 1, -1);
//		int num = 0;
//		int cost = 0;
//		for (int i = 0; i < Arc.size(); i++)
//		{
//			int roota, rootb;
//			roota = find(root, Arc[i].a); rootb = find(root, Arc[i].b);
//			if (roota == rootb) continue;
//			cost += Arc[i].cost;
//			root[roota] = rootb;
//			num++;
//			if (num == M - 1) break;
//		}
//		if (num == M - 1) cout << cost << endl;
//		else cout << "?" << endl;
//	}
//}