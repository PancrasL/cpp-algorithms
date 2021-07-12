//#include<iostream>
//#include<vector>
//using namespace std;
//int getDnum(int n)
//{
//	int m = 0;
//	while (n)
//	{
//		m = m * 10 + n % 10;
//		n /= 10;
//	}
//	return m;
//}
//int main(void)
//{
//	int n;
//	while (cin>>n)
//	{
//		vector<int> v;
//		int m;
//		m = getDnum(n);
//		int cnt = 0;
//		v.push_back(n);
//		while (m != n)
//		{
//			cnt++;
//			n = m + n;
//			m = getDnum(n);
//			v.push_back(n);
//		}
//		cout << cnt << endl;
//		cout << v[0];
//		for (int i = 1; i < v.size(); i++)
//			cout << "--->" << v[i];
//		cout << endl;
//	}
//}