//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//#define SIZE 100001
//map<int, int> root;
//int find(int x)
//{
//	if (root[x] == 0) return x;
//	else return root[x] = find(root[x]);
//}
//int main(void)
//{
//	int a, b;
//	while (true)
//	{
//		cin >> a >> b;
//		if (a == -1 && b == -1) break;
//		root.clear();
//		int cnt = 0;
//		while (true)//录入迷宫
//		{
//			if (a == 0 && b == 0) break;
//			int roota, rootb;
//			roota = find(a); rootb = find(b);
//			if (roota == rootb)
//			{
//				cnt = 2; //存在环路
//			}
//			else
//			{
//				root[roota] = rootb;
//			}
//			cin >> a >> b;
//		}
//		if (cnt == 0)
//		{
//			map<int, int>::iterator it = root.begin();
//			int pin = find(it->first);
//			while (it != root.end())
//			{
//				int roota = find(it->first);
//				if (roota != pin)
//				{
//					cnt = 3; break;//不连通
//				}
//				it++;
//			}
//		}
//		if (cnt >= 2)
//		{
//			cout << "No" << endl;
//		}
//		else cout << "Yes" << endl;
//	}
//}