//#include<iostream>
//using namespace std;
//int num[600001];
//int main(void)
//{
//	num[0] = num[1] = 0;
//	for(int i=1;i<=300000;i++)
//		for (int j = i + i; j <= 600000; j += i)
//		{
//			num[j] += i;
//		}
//	int M;
//	cin >> M;
//	while (M--)
//	{
//		int num1, num2;
//		cin >> num1 >> num2;
//		if (num[num1] == num2 && num[num2] == num1)
//			cout << "YES";
//		else cout << "NO";
//		cout << endl;
//	}
//}