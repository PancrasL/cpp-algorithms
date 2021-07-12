//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//int find(vector<int> &root,int x)
//{
//	if (root[x] == -1)
//	{
//		return x;
//	}
//	else return root[x] = find(root, root[x]);
//}
//int main(void)
//{
//	int N, M;
//	cin >> N;
//	while (N)
//	{
//		vector<int> root(N + 1, -1);
//		cin >> M;
//		for (int i = 0; i < M; i++)//并查集合并
//		{
//			int a, b;
//			cin >> a >> b;
//			int roota, rootb;
//			roota = find(root,a); rootb = find(root,b);
//			if (roota != rootb) root[roota] = rootb;
//		}
//		set<int> st;
//		for (int i = 1; i <= N; i++)//统计集合的个数
//		{
//			int rootx = find(root, i);
//			if (st.find(rootx) == st.end())
//				st.insert(rootx);
//		}
//		cout << st.size() - 1 << endl;
//		cin >> N;
//	}
//	return 0;
//}