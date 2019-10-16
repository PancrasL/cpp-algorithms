//#include<iostream>
//#include<string>
//#include<stack>
//#include<sstream>
//#include<stdio.h>
//using namespace std;
//int my_stoi(string s)
//{
//	int num = 0;
//	int i = 0;
//	if (s[0] == '-') i++;
//	while(i<s.size())
//	{
//		num = num * 10 + s[i] - '0';
//		i++;
//	}
//	return (s[0] == '-') ? -num : num;
//}
//int main(void)
//{
//	stack<double> num;//²Ù×÷Êý
//	string line;
//	getline(cin, line);
//	while (true)
//	{
//		if (line.size() == 1 && line[0] == '0') break;
//		istringstream is(line);
//		string temp;
//		is >> temp;
//		num.push(my_stoi(temp));
//		while (is>>temp)
//		{
//			if (temp == "*")
//			{
//				double a, b;
//				a = num.top(); num.pop();
//				is >> temp;
//				b = my_stoi(temp);
//				num.push(a*b);
//			}
//			else if (temp == "/")
//			{
//				double a, b;
//				a = num.top(); num.pop();
//				is >> temp;
//				b = my_stoi(temp);
//				num.push(a / b);
//			}
//			else if(temp=="+")
//			{
//				int a;
//				is >> temp;
//				a = my_stoi(temp);
//				num.push(a);
//			}
//			else if (temp == "-")
//			{
//				int a;
//				is >> temp;
//				a = my_stoi(temp);
//				num.push(-a);
//			}
//		}
//		double sum = 0;
//		while (!num.empty())
//		{
//			sum += num.top(); num.pop();
//		}
//		printf("%.2lf\n", sum);
//		getline(cin, line);
//	}
//	return 0;
//}