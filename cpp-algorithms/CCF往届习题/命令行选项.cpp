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
//		instr >> opt;//忽略程序名
//		while (instr >> opt)
//		{
//			if (opt.length() == 2 && opt[0] == '-')//是一个选项
//			{
//				int pos = format.find(opt[1]);
//				if (pos == -1)
//				{
//					break;//非法选项
//				}
//				if (format[pos + 1] == ':')//是带参数的选项
//				{
//					string arg;
//					if(instr >> arg)//读取参数
//						mp[opt] = arg;
//				}
//				else//不带参数的选项
//				{
//					mp[opt] = "";
//				}
//			}
//			else break;//既不是选项也不是参数
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