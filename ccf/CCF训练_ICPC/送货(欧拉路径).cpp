//#include<iostream>
//#include<vector>
//#include<set>
//#include<stack>
//using namespace std;
//vector<int> root(10001, -1);//���鼯�ж���ͨ��
//bool visited[10001][10001];
//int num = 0;//ͳ���߹��Ľֵ�����
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
//	cin >> n >> m;//·�������ͽֵ�����
//	vector<set<int> > G(n + 1);//����ͼ������ʹ�ڽӵ�����
//	vector<int> degree(n + 1);//������Ķ�
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		int roota, rootb;
//		roota = find(a); rootb = find(b);
//		if (roota != rootb) root[roota] = rootb;//���鼯�ϲ�
//		G[a].insert(b); G[b].insert(a);
//		degree[a]++; degree[b]++;
//	}
//	/*�ж���ͨ��*/
//	int flag = find(1);
//	for (int i = 1; i <= n; i++)
//	{
//		if (find(i) != flag)//����ͨ
//		{
//			cout << -1 << endl;
//			return 0;
//		}
//	}
//	int cnt = 0;//ͳ�������ȵĽ��
//	int even[2];//���������ȵĽ��
//	for(int i=1;i<=n;i++)
//		if (degree[i] % 2 == 1)
//		{
//			even[cnt] = i;
//			cnt++;
//			if (cnt == 3) break;
//		}
//	if (cnt == 3 || cnt == 1) cout << -1 << endl;//������ŷ��·��
//	else if (cnt == 2 && (even[0] != 1 && even[1] != 1)) cout << -1 << endl;//1��·�ڵĶȲ�Ϊ����
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