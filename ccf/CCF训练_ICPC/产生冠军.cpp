//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//using namespace std;
//int main(void)
//{
//	int n;
//	cin >> n;
//	while (n)
//	{
//		map<string, int> mp;
//		for (int i = 0; i < n; i++)
//		{
//			string s1, s2;
//			cin >> s1 >> s2;
//			if (mp.find(s1) == mp.end())
//				mp[s1] = 0;
//			mp[s2]++;
//		}
//		map<string, int>::iterator it = mp.begin();
//		int cnt = 0;
//		while (it != mp.end())
//		{
//			if (it->second == 0) cnt++;
//			it++;
//		}
//		if (cnt == 1) cout << "Yes" << endl;
//		else cout << "No" << endl;
//		cin >> n;
//	}
//}