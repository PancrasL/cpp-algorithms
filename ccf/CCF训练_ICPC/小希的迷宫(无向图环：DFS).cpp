//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//#define SIZE 100001
//map<int, vector<int>> G;
//map<int, int> visited;//0��ʾ��㲻���ڣ�1��ʾ��㱻���ʣ�2��ʾ���δ������
//int DFS(int a, int b)//�����ڻ�����1�����ڻ�����0
//{
//	int circle = 0;
//
//	for (int i = 0; i < G[a].size(); i++)
//	{
//		if (G[a][i] == b) continue;
//		if (visited[G[a][i]] == 1)
//		{
//			circle = 1;//���ڻ�
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
//		while (true)//¼���Թ�
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
//				if (cnt == 2) break;//ͼ����ͨ
//				int temp = DFS(it->first, -1);
//				if (temp == 0)//ͼ���ڻ�
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