//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int n;
//	cin >> n;
//	while (n)
//	{
//		int salary;
//		int sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> salary;
//			if (salary >= 100)
//			{
//				sum += salary / 100;
//				salary %= 100;
//			}
//			if (salary >= 50)
//			{
//				sum += salary / 50;
//				salary %= 50;
//			}
//			if (salary >= 10)
//			{
//				sum += salary / 10;
//				salary %= 10;
//			}
//			if (salary >= 5)
//			{
//				sum += salary / 5;
//				salary %= 5;
//			}
//			if (salary >= 2)
//			{
//				sum += salary / 2;
//				salary %= 2;
//			}
//			sum += salary;
//		}
//		cout << sum << endl;
//		cin >> n;
//	}
//}