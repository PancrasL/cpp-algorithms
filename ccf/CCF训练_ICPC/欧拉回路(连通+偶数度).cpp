//#include<iostream>
//#include<vector>
//using namespace std;
//int find(vector<int> &root, int x)
//{
//	if (root[x] == -1) return x;
//	else return root[x] = find(root, root[x]);
//}
//int main(void)
//{
//	int N, M;
//	while (true)
//	{
//		cin >> N;
//		if (N == 0) break;
//		cin >> M;
//		vector<int> degree(N + 1, 0);
//		vector<int> root(N + 1, -1);
//		for (int i = 0; i < M; i++)
//		{
//			int a, b;
//			cin >> a >> b;
//			degree[a]++; degree[b]++;
//			int roota, rootb;
//			roota = find(root, a); rootb = find(root, b);
//			if (roota != rootb) root[roota] = rootb;
//		}
//		int i;
//		int key = find(root, 1);
//		for (i = 1; i <= N; i++)
//		{
//			if (key != find(root, i))
//				break;
//		}
//		if (i <= N) cout << 0 << endl;//不连通
//		else {
//			for (i = 1; i <= N; i++)
//			{
//				if (degree[i] % 2 == 1)//存在奇数度的点
//					break;
//			}
//			if (i == N + 1)
//				cout << 1 << endl;
//			else cout << 0 << endl;
//		}
//	}
//}