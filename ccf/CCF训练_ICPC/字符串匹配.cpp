//#include<iostream>
//#include<string>
//#include<vector>
//#include<ctype.h>
//using namespace std;
//void my_tolower(string &s)
//{
//	for (int i = 0; i < s.size(); i++)
//		s[i] = tolower(s[i]);
//}
//int main(void)
//{
//	string s;
//	int op;
//	int n;
//	vector<string> v;
//
//	cin >> s;
//	cin >> op;
//	if (op == 0) my_tolower(s);//大小写不敏感
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		string temp;
//		cin >> temp;
//		v.push_back(temp);
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		string temp = v[i];
//		if (op == 0) my_tolower(temp);
//		if (temp.find(s) != string::npos) cout << v[i] << endl;
//	}
//	return 0;
//}