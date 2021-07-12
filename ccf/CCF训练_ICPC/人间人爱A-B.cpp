//#include<iostream>
//#include<set>
//using namespace std;
//int main(void)
//{
//	set<int> S;
//	int n, m;
//	cin >> n >> m;
//	while (n || m)
//	{
//		S.clear();
//		int num;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> num;
//			S.insert(num);
//		}
//		for (int i = 0; i < m; i++)
//		{
//			cin >> num;
//			S.erase(num);
//		}
//		if (S.empty()) cout << "NULL";
//		else
//		{
//			set<int>::iterator it = S.begin();
//			while (it != S.end())
//			{
//				cout << *it << ' ';
//				it++;
//			}
//		}
//		cout << endl;
//		cin >> n >> m;
//	}
//}