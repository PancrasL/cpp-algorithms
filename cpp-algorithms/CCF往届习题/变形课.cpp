//#include<iostream>
//#include<vector>
//#include<string>
//#include<memory.h>
//using namespace std;
//int G[26][26];
//bool visited[26][26];
//bool DFS(int begin,int end)
//{
//	if (begin == end) return true;
//	for (int j = 0; j < 26; j++)
//	{
//		if (G[begin][j]&&!visited[begin][j])
//		{
//			visited[begin][j] = 1;
//			if (DFS(j, end)) return true;
//		}
//	}
//	return false;
//}
//int main(void)
//{
//	string s;
//	while (cin>>s)
//	{
//		memset(G, 0, sizeof(G));
//		while (true)
//		{
//			if (s == "0") break;
//			G[s[0] - 'a'][s[s.size() - 1] - 'a'] = 1;
//			cin >> s;
//		}
//		memset(visited, 0, sizeof(visited));
//		if (DFS('b' - 'a', 'm' - 'a'))
//			cout << "Yes." << endl;
//		else cout << "No." << endl;
//	}
//	return 0;
//}