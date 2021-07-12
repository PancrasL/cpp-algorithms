//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<string>
//#include<stack>
//#include<stdio.h>
//using namespace std;
//#define MAX_SIZE 100
//vector<int> res;
//void getnum()
//{
//	vector<int> num(MAX_SIZE, 1);
//	num[0] = num[1] = 0; num[2] = 1;
//	for (int i = 2; i < MAX_SIZE; i++)
//	{
//		if (num[i])
//		{
//			res.push_back(i);
//			for (int j = i + i; j < MAX_SIZE; j+=i)
//				num[j] = 0;
//		}
//	}
//	return;
//}
//int main(void)
//{
//	getnum();
//	string a, b;
//	while (true)
//	{
//		vector<int> a, b;
//		while (true)
//		{
//			int num; char c;
//			scanf("%d%c", &num, &c);
//			a.push_back(num);
//			if (c == ' ') break;
//		}
//		while (true)
//		{
//			int num; char c;
//			scanf("%d%c", &num, &c);
//			b.push_back(num);
//			if (c == '\n') break;
//		}
//		if (a[0] == 0 || b[0] == 0) break;
//		if (a.size() > b.size()) a.swap(b);//±£Ö¤a¶Ìb³¤
//		int index = 0;
//		int i = a.size() - 1, j = b.size() - 1;
//		stack<int> ans;
//		int carry = 0;
//		while (i >= 0)
//		{
//			int temp = a[i] + b[j] + carry;
//			if (temp >= res[index])
//			{
//				ans.push(temp - res[index]);
//				carry = 1;
//			}
//			else
//			{
//				ans.push(temp);
//				carry = 0;
//			}
//			i--; j--; index++;
//		}
//		while (j >= 0)
//		{
//			int temp = b[j] + carry;
//			if (temp >= res[index])
//			{
//				ans.push(temp - res[index]);
//				carry = 1;
//			}
//			else
//			{
//				ans.push(temp);
//				carry = 0;
//			}
//			j--; index++;
//		}
//		if (carry) ans.push(1);
//		cout << ans.top(); ans.pop();
//		while (!ans.empty())
//		{
//			cout << ',' << ans.top(); ans.pop();
//		}
//		cout << endl;
//	}
//	
//	
//}