//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//int sumInteger(string &a, string &b, string &ans)
//{
//	reverse(a.begin(), a.end()); reverse(b.begin(), b.end());
//	int sum, carry;
//	sum = carry = 0;
//	int i = 0;
//	while (i < a.size() && i < b.size())
//	{
//		sum = a[i] - '0' + b[i] - '0' + carry;
//		if (sum > 9)
//		{
//			carry = sum / 10;
//			sum %= 10;
//		}
//		else carry = 0;
//		ans.push_back(sum + '0');
//		i++;
//	}
//	while (i<a.size())
//	{
//		sum = a[i] - '0' + carry;
//		if (sum > 9)
//		{
//			carry = sum / 10;
//			sum %= 10;
//		}
//		else carry = 0;
//		ans.push_back(sum + '0');
//		i++;
//	}
//	while (i<b.size())
//	{
//		sum = b[i] - '0' + carry;
//		if (sum > 9)
//		{
//			carry = sum / 10;
//			sum %= 10;
//		}
//		else carry = 0;
//		ans.push_back(sum + '0');
//		i++;
//	}
//	if (carry) ans.push_back('1');
//	reverse(a.begin(), a.end());
//	reverse(b.begin(), b.end());
//	reverse(ans.begin(), ans.end());
//	return 0;
//}
//int main(void)
//{
//	int N;
//	vector<string> num(201);
//	num[0] = "0"; num[1] = "1"; num[2] = "2";
//	for (int i = 3; i <= 200; i++)
//	{
//		sumInteger(num[i - 2], num[i - 1], num[i]);
//	}
//	while (cin >> N)
//	{
//		cout << num[N] << endl;
//	}
//	return 0;
//}