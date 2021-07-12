//#include<iostream>
//#include<stack>
//#include<vector>
//using namespace std;
//vector<int> visited;
//vector<int> ans;
//void DFS_G(vector<vector<int> >&G, int src, stack<int> &s)//深搜原图
//{
//	visited[src] = true;
//	for (int i = 0; i < G[src].size(); i++)
//	{
//		if (!visited[G[src][i]])
//			DFS_G(G, G[src][i], s);
//	}
//	s.push(src);
//}
//void DFS_GT(vector<vector<int> > &GT, int src, stack<int> &s, int flag)//深搜逆图
//{
//	visited[src] = true;
//	ans[flag]++;
//	for (int i = 0; i < GT[src].size(); i++)
//	{
//		if (!visited[GT[src][i]])
//			DFS_GT(GT, GT[src][i], s, flag);
//	}
//}
//int main(void)
//{
//	int n, m;//城市数量+单向路数量
//	cin >> n >> m;
//	vector<vector<int> > G(n + 1), GT(n + 1);//图G和图G的逆图GT
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		G[a].push_back(b); GT[b].push_back(a);
//	}
//	stack<int> s;
//	visited.assign(n + 1, 0);
//	for (int i = 1; i <=n; i++)
//	{
//		if (!visited[i])
//			DFS_G(G, i, s);
//	}
//	ans.assign(n + 1, 0);
//	visited.assign(n + 1, 0);
//	int index = 1;
//	while (!s.empty())
//	{
//		int i = s.top(); s.pop();
//		if (!visited[i])
//		{
//			DFS_GT(GT, i, s, index);
//			index++;
//		}
//	}
//	long long res = 0;
//	for (int i = 1; i < index; i++)
//		res += ans[i] * (ans[i] - 1) / 2;
//	cout << res;
//}