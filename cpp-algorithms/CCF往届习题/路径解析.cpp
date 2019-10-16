//#include<iostream>
//#include<string>	
//#include<vector>
//#include<sstream>
//using namespace std;
//string cur;
//int main(void)
//{
//	int p;
//	string line;
//	cin >> p;
//	cin >> cur;//获取当前目录
//	getchar();
//	for (int i = 0; i < cur.size(); i++)
//		if (cur[i] == '/')
//			cur[i] = ' ';
//	vector<string> curdir;//拆分当前目录
//	istringstream is(cur);
//	string temp;
//	while (is>>temp)
//	{
//		curdir.push_back(temp);
//	}
//	while (p--)
//	{
//		getline(cin, line);
//		vector<string> v;
//		if (line == "")
//		{
//			v = curdir;
//		}
//		else {
//			if (line[0] != '/') v = curdir;//使用相对路径
//			for (int i = 0; i < line.size(); i++)
//				if (line[i] == '/')
//					line[i] = ' ';
//			istringstream inStr(line);
//			while (inStr >> temp)
//			{
//				if (temp == ".") continue;
//				else if (temp == "..") {
//					if (!v.empty())
//						v.pop_back();
//				}
//				else v.push_back(temp);
//			}
//		}
//		if (v.empty()) cout << "/" << endl;
//		else
//		{
//			for (int i = 0; i < v.size(); i++)
//				cout << "/" << v[i];
//			cout << endl;
//		}
//	}
//	return 0;
//}