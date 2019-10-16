//#include<iostream>
//#include<string>
//#include<sstream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(void)
//{
//	string line;
//	while (cin >> line)
//	{
//		for (int i = 0; i < line.size(); i++)
//		{
//			if (line[i] == '5') line[i] = ' ';
//		}
//		int first = 1;
//		istringstream is(line);
//		string s;
//		vector<int> num;
//		while (is >> s)
//		{
//			int pos = s.find_first_not_of('0');
//			if (pos == -1)//数字全部由0组成
//			{
//				num.push_back(0);
//			}
//			else
//			{
//				num.push_back(stoi(s.substr(pos)));
//			}
//		}
//		sort(num.begin(), num.end());
//		cout << num[0];
//		for (int i = 1; i < num.size(); i++)
//			cout << ' ' << num[i];
//		cout << endl;
//	}
//}