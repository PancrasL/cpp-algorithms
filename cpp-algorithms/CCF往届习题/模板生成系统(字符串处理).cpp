//#include<string>
//#include<vector>
//#include<iostream>
//#include<map>
//using namespace std;
//int main(void)
//{
//	
//	int m, n;
//	cin >> m >> n;
//	getchar();
//	vector<string> v(m);//保存读入的字符串
//	map<string, string> mp;//变量映射
//	for (int i = 0; i < m; i++)
//	{
//		getline(cin, v[i]);
//	}
//	string line, s1, s2;
//	for (int i = 0; i < n; i++)
//	{
//		getline(cin, line);
//		int pos = line.find(' ');
//		string s1, s2;
//		s1 = line.substr(0, pos);
//		s2 = line.substr(pos + 1, line.size() - pos - 1);
//		s2 = s2.substr(1, s2.length() - 2);//取出引号
//		mp[s1] = s2;//插入变量
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		string replace;
//		int begin, end;
//		begin = end = 0;
//		begin = v[i].find("{{ ");
//		if (begin == -1) continue;//没有变量
//		replace = v[i].substr(0, begin);
//		while (begin!=-1)
//		{
//			end = v[i].find(" }}", begin);
//			string key = v[i].substr(begin + 3, end - begin - 3);
//			replace += mp[key];
//			begin = v[i].find("{{ ", end);
//			end += 3;
//			if (begin == -1) replace += v[i].substr(end);
//			else replace += v[i].substr(end, begin - end);
//		}
//		v[i].swap(replace);
//	}
//
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << endl;
//	//system("pause");
//}