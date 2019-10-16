//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int n, m;
//	while (cin >> n)
//	{
//		cin >> m;
//		int sum = 0;
//		int num = 0;
//		int cnt = 0;
//		int flag = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			num += 2;
//			cnt++;
//			sum += num;
//			if (cnt == m)
//			{
//				if (flag)
//				{
//					cout << sum / cnt;
//					flag = 0;
//				}
//				else cout << ' ' << sum / cnt;
//				sum = 0; cnt = 0;
//			}
//		}
//		if (cnt) cout << ' ' << sum / cnt;
//		cout << endl;
//	}
//}