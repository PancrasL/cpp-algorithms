//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//#include<sstream>
//using namespace std;
//string format;
//int main(void)
//{
//	cin >> format;
//	int N;
//	cin >> N;
//	getchar();
//	for (int i = 1; i <= N; i++)
//	{
//		string line;
//		getline(cin, line);
//		map<string, string> mp;
//		istringstream instr(line);
//		string opt;
//		instr >> opt;//���Գ�����
//		while (instr >> opt)
//		{
//			if (opt.length() == 2 && opt[0] == '-')//��һ��ѡ��
//			{
//				int pos = format.find(opt[1]);
//				if (pos == -1)
//				{
//					break;//�Ƿ�ѡ��
//				}
//				if (format[pos + 1] == ':')//�Ǵ�������ѡ��
//				{
//					string arg;
//					if(instr >> arg)//��ȡ����
//						mp[opt] = arg;
//				}
//				else//����������ѡ��
//				{
//					mp[opt] = "";
//				}
//			}
//			else break;//�Ȳ���ѡ��Ҳ���ǲ���
//		}
//		map<string, string>::iterator it = mp.begin();
//		cout << "Case " << i << ":";
//		while (it != mp.end())
//		{
//			if (it->second == "")
//			{
//				cout << " " << it->first;
//			}
//			else cout << " " << it->first << " " << it->second;
//			it++;
//		}
//		cout << endl;
//	}
//	return 0;
//}