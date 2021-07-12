//#include<iostream>
//#include<stack>
//using namespace std;
//char c[] = { 'A','B','C','D','E','F' };
//int main(void)
//{
//	int N, R;
//	int sig;
//	while (cin>>N)
//	{
//		cin >> R;
//		sig = 1;
//		if (N < 0)
//		{
//			sig = -1; N = -N;
//		}
//		stack<int> s;
//		while (N)
//		{
//			s.push(N%R);
//			N /= R;
//		}
//		if (s.empty()) cout << 0 << endl;
//		else 
//		{
//			if (sig == -1) cout << '-';
//			while (!s.empty())
//			{
//				if (s.top() >= 10)
//				{
//					cout << c[s.top() - 10];
//				}
//				else cout << s.top();
//				s.pop();
//			}
//			cout << endl;
//		}
//	}
//}