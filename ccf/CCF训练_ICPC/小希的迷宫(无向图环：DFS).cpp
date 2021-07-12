//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//#define SIZE 100001
//map<int, vector<int>> G;
//map<int, int> visited;//0表示结点不存在，1表示结点被访问，2表示结点未被访问
//int DFS(int a, int b)//不存在环返回1，存在环返回0
//{
//	int circle = 0;
//
//	for (int i = 0; i < G[a].size(); i++)
//	{
//		if (G[a][i] == b) continue;
//		if (visited[G[a][i]] == 1)
//		{
//			circle = 1;//存在环
//			break;
//		}
//		if (visited[G[a][i]] == 2)
//		{
//			visited[G[a][i]] = 1;
//			int temp = DFS(G[a][i], a);
//			if (temp == 0)
//			{
//				circle = 1;
//				break;
//			}
//		}
//	}
//	return circle == 0;
//}
//int main(void)
//{
//	int a, b;
//	while (true)
//	{
//		cin >> a >> b;
//		if (a == -1 && b == -1) break;
//		int max_num = 0;
//		G.clear(); visited.clear();
//		while (true)//录入迷宫
//		{
//			if (a == 0 && b == 0) break;
//			G[a].push_back(b); G[b].push_back(a);
//			visited[a] = 2; visited[b] = 2;
//			cin >> a >> b;
// 		}
//		int cnt = 0;
//		map<int, vector<int>>::iterator it = G.begin();
//		while (it != G.end())
//		{
//			if (visited[it->first] == 2)
//			{
//				visited[it->first] = 1;
//				cnt++; 
//				if (cnt == 2) break;//图不连通
//				int temp = DFS(it->first, -1);
//				if (temp == 0)//图存在环
//				{
//					cnt = 3; break;
//				}
//			}
//			it++;
//		}
//		if (cnt >= 2)
//		{
//			cout << "No" << endl;
//		}
//		else cout << "Yes" << endl;
//	}
//}