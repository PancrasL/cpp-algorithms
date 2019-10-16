//#include<iostream>
//#include<vector>
//#include<string>	
//#include<map>
//using namespace std;
//map<string,string> auth;//权限类别
//map<string, vector<string> > role;//角色具有的权限
//map<string,map<string,string> > user;//用户具有的权限
//int main(void)
//{
//	int p;
//	cin >> p;
//	for (int i = 0; i < p; i++)
//	{
//		string s;
//		cin >> s;
//		int pos = s.find(':');
//		if (pos == -1)
//			auth[s] = "";
//		else auth[s.substr(0, pos)] = s.substr(pos + 1);
//	}
//	
//	int r;
//	cin >> r;
//	for (int i = 0; i < r; i++)
//	{
//		string s;
//		int num;
//		cin >> s >> num;
//		for (int j = 0; j < num; j++)
//		{
//			string line;
//			cin >> line;
//			role[s].push_back(line);
//		}
//	}
//
//	int u;
//	cin >> u;
//	for (int i = 0; i < u; i++)
//	{
//		string s; int num;//s表示用户名，num指用户拥有的角色数
//		cin >> s >> num;
//		map<string, string> mp;//当前用户的权限列表
//		for (int j = 0; j < num; j++)
//		{
//			string curRole;
//			cin >> curRole;//line表示角色
//			for (int i = 0; i < role[curRole].size(); i++)
//			{
//				string aut = role[curRole][i];
//				int pos = aut.find(':');
//				if (pos == -1)//不带等级的权限
//					mp[aut] = "";
//				else//带等级的权限
//				{
//					string s1, s2;
//					s1 = aut.substr(0, pos); s2 = aut.substr(pos + 1);
//					if (mp.count(s1) == 1)//权限已经存在
//					{
//						if (mp[s1] < s2) mp[s1] = s2;//替换为高等级权限
//					}
//					else mp[s1] = s2;
//				}
//			}
//		}
//		user[s] = mp;
//	}
//
//	int q;
//	cin >> q;
//	for (int i = 0; i < q; i++)
//	{
//		string name, privilege;
//		cin >> name >> privilege;
//		if (user.count(name) == 0) cout << "false" << endl;//用户不存在
//		else
//		{
//			int pos = privilege.find(':');
//			if (pos == -1)//不带等级权限查询
//			{
//				if (user[name].count(privilege) == 0) cout << "false" << endl;//权限不存在
//				else
//				{
//					string pri = user[name][privilege];
//					if (pri == "") cout << "true" << endl;
//					else cout << pri << endl;
//				}
//			}
//			else//带等级权限查询
//			{
//				string s1, s2;
//				s1 = privilege.substr(0, pos); s2 = privilege.substr(pos + 1);
//				if (user[name].count(s1) == 0) cout << "false" << endl;//权限不存在
//				else
//				{
//					string pri = user[name][s1];
//					if (s2 <= pri) cout << "true" << endl;
//					else cout << "false" << endl;
//				}
//			}
//		}
//	}
//}