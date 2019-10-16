//#include<iostream>
//#include<stack>
//using namespace std;
//int main(void)
//{
//	unsigned long long A, B, SUM;
//	unsigned long long m;
//	cin >> m;
//	while (m)
//	{
//		cin >> A >> B;
//		stack<unsigned> s;
//		SUM = A + B;
//		while (SUM)
//		{
//			s.push(SUM%m);
//			SUM /= m;
//		}
//		if (s.empty()) cout << 0;
//		while (!s.empty())
//		{
//			cout << s.top(); s.pop();
//		}
//		cout << endl;
//		cin >> m;
//	}
//}