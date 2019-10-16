//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int sumInteger(string &a, string &b, string &ans, int C)
//{
//	reverse(a.begin(), a.end()); reverse(b.begin(), b.end());
//	int sum, carry;
//	sum = 0; carry = C;
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
//		sum = a[i] - '0'  + carry;
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
//		sum =  b[i] - '0' + carry;
//		if (sum > 9)
//		{
//			carry = sum / 10;
//			sum %= 10;
//		}
//		else carry = 0;
//		ans.push_back(sum + '0');
//		i++;
//	}
//	if (carry)
//		ans.push_back('1');
//	reverse(ans.begin(), ans.end());
//	reverse(a.begin(), a.end()); reverse(b.begin(), b.end());
//	return carry;
//}
//vector<string> v(1001);
//int main(void)
//{
//	int N;
//	cin >> N;
//	v[0] = "0"; v[1] = "1"; v[2] = "1"; v[3] = "2";
//	for (int i = 4; i <= 1000; i++)
//	{
//		sumInteger(v[i - 2], v[i - 1], v[i], 0);
//		if (i == 800)
//			continue;
//	}
//	while (N--)
//	{
//		int index;
//		cin >> index;
//		cout << v[index] << endl;
//	}
//
//}