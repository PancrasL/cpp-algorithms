//#include<vector>
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int m, n;
//	while (cin >> m)
//	{
//		cin >> n;
//		vector<int> num;
//		for (int i = m; i <= n; i++)
//		{
//			int a, b, c;
//			a = i / 100; b = (i % 100) / 10; c = i % 10;
//			if ((a*a*a) + (b*b*b) + (c*c*c) == i)
//				num.push_back(i);
//		}
//		if (num.size() == 0)
//			cout << "no" << endl;
//		else
//		{
//			cout << num[0];
//			for (int i = 1; i < num.size(); i++)
//				cout << ' ' << num[i];
//			cout << endl;
//		}
//	}
//	return 0;
//}