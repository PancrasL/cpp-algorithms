//#include<iostream>
//#include<vector>
//#include<memory.h>
//using namespace std;
//int n, m;//��������̨ʽ������
//bool visited[20001];
//int DFS(vector<vector<int> > &G, int index, int &seq)//����������Ⱥ͸�����µ��յ�
//{
//	visited[index] = true;
//	int deep = 0, num = index;
//	for (int i = 0; i < G[index].size(); i++)
//	{
//		if (!visited[G[index][i]])
//		{
//			int deep1, num1;
//			deep1 = 1 + DFS(G, G[index][i], num1);
//			if (deep < deep1)
//			{
//				deep = deep1;
//				num = num1;
//			}
//		}
//	}
//	seq = num;
//	return deep;
//}
//int main(void)
//{
//	cin >> n >> m;
//	vector<vector<int> > G(m + n + 1);
//	//���������1-n��̨ʽ�����n+1-n+m
//	for (int i = 2; i <= n + m; i++)
//	{
//		int a;
//		scanf("%d", &a);
//		G[i].push_back(a);
//		G[a].push_back(i);
//	}
//	int num, deep;
//	DFS(G, 1, num);
//	memset(visited, 0, sizeof(visited));
//	deep = DFS(G, num, num);
//	cout << deep << endl;
//}