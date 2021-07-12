//#include<string>	
//#include<vector>
//#include<iostream>
//using namespace std;
//struct NODE
//{
//	vector<string> v;//规则内容
//	string name;//规则名字
//};
//vector<NODE> rule;
//vector<string> para;
//void split(vector<string> &v, string &s)
//{
//	int begin, end;
//	begin = 1;
//	end = s.find('/', begin);
//	while(end != -1)
//	{
//		v.push_back(s.substr(begin, end - begin));
//		begin = end + 1;
//		end = s.find('/', begin);
//	}
//	v.push_back(s.substr(begin));
//	return;
//}
//bool match(vector<string> &rule, vector<string> &v)
//{
//	para.clear();
//	int i;
//	if (v.size() < rule.size()) return false;
//	for (i = 0; i < rule.size(); i++)
//	{
//		if (rule[i] == "<int>")
//		{
//			int k;
//			for (k = 0; k < v[i].size(); k++)
//			{
//				if (v[i][k]<'0' || v[i][k]>'9')
//					return false;
//			}
//			if (k != v[i].size()) 
//				return false;
//			k = 0;
//			while (v[i][k] == '0') k++;
//			string s;
//			while (k<v[i].size())
//			{
//				s.push_back(v[i][k]);
//				k++;
//			}
//			para.push_back(s);
//		}
//		else if (rule[i] == "<str>")
//		{
//			if (v[i] == "") return false;
//			para.push_back(v[i]);
//		}
//		else if (rule[i] == "<path>")
//		{
//			string s;
//			s = v[i];
//			for (int k = i+1; k < v.size(); k++)
//			{
//				s += '/' + v[k];
//			}
//			para.push_back(s);
//			i = v.size();
//			break;
//		}
//		else
//		{
//			if (rule[i] != v[i]) return false;
//		}
//	}
//	return i == v.size();
//}
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	rule.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		string s, t;
//		cin >> s >> rule[i].name;
//		split(rule[i].v, s);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		string s;
//		cin >> s;
//		vector<string> v;
//		split(v, s);
//		int j = 0;
//		int flag = 0;
//		while (j < n)
//		{
//			if (match(rule[j].v, v))
//			{
//				flag = 1;
//				break;
//			}
//			j++;
//		}
//		cout << (flag ? rule[j].name : "404");
//		for (int k = 0; k < para.size(); k++)
//			cout << ' ' << para[k];
//		cout << endl;
//	}
//	return 0;
//}
//
