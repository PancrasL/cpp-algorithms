//#include<iostream>
//#include<vector>
//#include<set>
//#include<stack>
//using namespace std;
//vector<int> root(10001, -1);//并查集判断连通性
//bool visited[10001][10001];
//int num = 0;//统计走过的街道数量
//int find(int x)
//{
//	if (root[x] == -1) return x;
//	else return root[x] = find(root[x]);
//}
//void DFS(vector<set<int> > &G, int src,stack<int> &s)
//{
//	set<int>::iterator it = G[src].begin();
//	while (it!=G[src].end())
//	{
//		if (!visited[src][*it])
//		{
//			visited[src][*it] = visited[*it][src] = true;
//			DFS(G, *it, s);
//			num++;
//		}
//		it++;
//	}
//	s.push(src);
//}
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;//路口数量和街道数量
//	vector<set<int> > G(n + 1);//保存图，并且使邻接点有序
//	vector<int> degree(n + 1);//计算结点的度
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		int roota, rootb;
//		roota = find(a); rootb = find(b);
//		if (roota != rootb) root[roota] = rootb;//并查集合并
//		G[a].insert(b); G[b].insert(a);
//		degree[a]++; degree[b]++;
//	}
//	/*判断连通性*/
//	int flag = find(1);
//	for (int i = 1; i <= n; i++)
//	{
//		if (find(i) != flag)//不连通
//		{
//			cout << -1 << endl;
//			return 0;
//		}
//	}
//	int cnt = 0;//统计奇数度的结点
//	int even[2];//保存奇数度的结点
//	for(int i=1;i<=n;i++)
//		if (degree[i] % 2 == 1)
//		{
//			even[cnt] = i;
//			cnt++;
//			if (cnt == 3) break;
//		}
//	if (cnt == 3 || cnt == 1) cout << -1 << endl;//不存在欧拉路径
//	else if (cnt == 2 && (even[0] != 1 && even[1] != 1)) cout << -1 << endl;//1号路口的度不为奇数
//	else
//	{
//		stack<int> s;
//		DFS(G, 1, s);
//		while (!s.empty())
//		{
//			cout << s.top() << ' '; s.pop();
//		}
//	}
//	return 0;
//}