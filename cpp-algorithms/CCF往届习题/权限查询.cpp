//#include<iostream>
//#include<vector>
//#include<string>	
//#include<map>
//using namespace std;
//map<string,string> auth;//Ȩ�����
//map<string, vector<string> > role;//��ɫ���е�Ȩ��
//map<string,map<string,string> > user;//�û����е�Ȩ��
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
//		string s; int num;//s��ʾ�û�����numָ�û�ӵ�еĽ�ɫ��
//		cin >> s >> num;
//		map<string, string> mp;//��ǰ�û���Ȩ���б�
//		for (int j = 0; j < num; j++)
//		{
//			string curRole;
//			cin >> curRole;//line��ʾ��ɫ
//			for (int i = 0; i < role[curRole].size(); i++)
//			{
//				string aut = role[curRole][i];
//				int pos = aut.find(':');
//				if (pos == -1)//�����ȼ���Ȩ��
//					mp[aut] = "";
//				else//���ȼ���Ȩ��
//				{
//					string s1, s2;
//					s1 = aut.substr(0, pos); s2 = aut.substr(pos + 1);
//					if (mp.count(s1) == 1)//Ȩ���Ѿ�����
//					{
//						if (mp[s1] < s2) mp[s1] = s2;//�滻Ϊ�ߵȼ�Ȩ��
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
//		if (user.count(name) == 0) cout << "false" << endl;//�û�������
//		else
//		{
//			int pos = privilege.find(':');
//			if (pos == -1)//�����ȼ�Ȩ�޲�ѯ
//			{
//				if (user[name].count(privilege) == 0) cout << "false" << endl;//Ȩ�޲�����
//				else
//				{
//					string pri = user[name][privilege];
//					if (pri == "") cout << "true" << endl;
//					else cout << pri << endl;
//				}
//			}
//			else//���ȼ�Ȩ�޲�ѯ
//			{
//				string s1, s2;
//				s1 = privilege.substr(0, pos); s2 = privilege.substr(pos + 1);
//				if (user[name].count(s1) == 0) cout << "false" << endl;//Ȩ�޲�����
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