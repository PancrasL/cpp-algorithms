//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//class Solution {
//public:
//	vector<string> restoreIpAddresses(string s) {
//		vector<string> ans;
//		vector<int> v;
//		persuiting(ans, v, s, 0);
//		return ans;
//	}
//private:
//	void persuiting(vector<string> &ans, vector<int> &v,string &s,int index)
//	{
//		if (((4 - v.size()) > (s.size() - index))) return;
//		if (v.size() == 3)
//		{
//			int num = 0;
//			if (s[index] == '0')
//			{
//				index++;
//				if (index != s.size()) return;
//			}
//			else
//			{
//				if (s.size() - index > 3) return;//获得的地址一定大于255
//				while (index < s.size())
//				{
//					num = num * 10 + s[index++] - '0';
//				}
//				if (num > 255) return;
//			}
//			char buf[40];
//			sprintf(buf, "%d.%d.%d.%d", v[0], v[1], v[2], num);
//			ans.push_back(buf);
//		}
//		else
//		{
//			int num = 0;
//			if (s[index] == '0')
//			{
//				index++;
//				v.push_back(num);
//				persuiting(ans, v, s, index);
//				v.pop_back();
//			}
//			else {
//				while (index < s.size())
//				{
//					num = num * 10 + s[index++] - '0';
//					if (num <= 255)
//					{
//						v.push_back(num);
//						persuiting(ans, v, s, index);
//						v.pop_back();
//					}
//					else break;
//				}
//			}
//		}
//	}
//};
//int main(void)
//{
//	while (true)
//	{
//		string in;
//		cin >> in;
//		Solution s;
//		vector<string> ans = s.restoreIpAddresses(in);
//		for (int i = 0; i < ans.size(); i++)
//			cout << ans[i] << endl;
//	}
//	return 0;
//}