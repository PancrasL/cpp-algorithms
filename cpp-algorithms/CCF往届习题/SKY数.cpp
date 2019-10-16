//#include<iostream>
//using namespace std;
//bool isSky(int num)
//{
//	int a = num;
//	int sum, sum1, sum2;
//	sum = sum1 = sum2 = 0;
//	while (a)
//	{
//		sum += a % 10;
//		a /= 10;
//	}
//	a = num;
//	while (a)
//	{
//		sum1 += a % 16;
//		a /= 16;
//	}
//	a = num;
//	while (a)
//	{
//		sum2 += a % 12;
//		a /= 12;
//	}
//	if (sum == sum1 && sum1 == sum2) return true;
//	else return false;
//}
//int main(void)
//{
//	int num;
//	cin >> num;
//	while (num)
//	{
//		if (isSky(num))
//		{
//			cout << num << " is a Sky Number.";
//		}
//		else cout << num << " is not a Sky Number.";
//		cout << endl;
//		cin >> num;
//	}
//}