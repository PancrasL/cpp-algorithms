//#include<string>	
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Node {
//	string a;//正数部分
//	string b;//小数部分
//	Node(string a1, string a2) :a(a1), b(a2) {};
//	Node() {};
//};
//int sumDecimal(string &a, string &b, string &ans)
//{
//	int i = b.size() - 1;
//	while (i >= a.size())
//	{
//		ans.push_back(b[i]); i--;
//	}
//	int sum, carry;
//	sum = carry = 0;
//	while (i >= 0)
//	{
//		sum = (a[i] - '0') + (b[i] - '0') + carry;
//		if (sum > 9)
//		{
//			carry = sum / 10;
//			sum %= 10;
//		}
//		else
//		{
//			carry = 0;
//		}
//		ans.push_back(sum + '0');
//		i--;
//	}
//	reverse(ans.begin(), ans.end());
//	return carry;
//}
//int sumInteger(string &a, string &b, string &ans,int C)
//{
//	int sum, carry;
//	sum = 0; carry = C;
//	int i = 0;
//	reverse(a.begin(),a.end()); reverse(b.begin(), b.end());
//	while (i < a.size())
//	{
//		sum = carry + a[i] - '0' + b[i] - '0';
//		if (sum > 9)
//		{
//			carry = sum / 10;
//			sum %= 10;
//		}
//		else
//		{
//			carry = 0;
//		}
//		ans.push_back(sum + '0');
//		i++;
//	}
//	while (i < b.size())
//	{
//		sum = carry  + b[i] - '0';
//		if (sum > 9)
//		{
//			carry = sum / 10;
//			sum %= 10;
//		}
//		else
//		{
//			carry = 0;
//		}
//		ans.push_back(sum + '0');
//		i++;
//	}
//	if (carry) ans.push_back('1');
//	reverse(ans.begin(), ans.end());
//	return 0;
//}
//int main(void)
//{
//	string A, B;
//	while (cin>>A>>B)
//	{
//		Node num1,num2;//分离小数和整数
//		int pos1, pos2;
//		pos1 = A.find('.'); pos2 = B.find('.');
//		if (pos1 == -1)
//		{
//			num1.a = A;
//			num1.b = "0";
//		}
//		else
//		{
//			num1.a = A.substr(0, pos1);
//			num1.b = A.substr(pos1 + 1);
//		}
//		if (pos2 == -1)
//		{
//			num2.a = B;
//			num2.b = "0";
//		}
//		else
//		{
//			num2.a = B.substr(0, pos2);
//			num2.b = B.substr(pos2 + 1);
//		}
//
//		Node ans;
//		int carry = 0;
//		if (num1.b.size() > num2.b.size())
//		{
//			carry = sumDecimal(num2.b, num1.b, ans.b);
//		}
//		else carry = sumDecimal(num1.b, num2.b, ans.b);
//		if (num1.a.size() > num2.a.size())
//		{
//			sumInteger(num2.a, num1.a, ans.a, carry);
//		}
//		else sumInteger(num1.a, num2.a, ans.a, carry);
//		cout << ans.a;
//		int pos = ans.b.find_last_not_of('0');
//		if (pos != -1)
//		{
//			cout << "." << ans.b.substr(0, pos + 1) << endl;
//		}
//		else cout << endl;
//	}
//}