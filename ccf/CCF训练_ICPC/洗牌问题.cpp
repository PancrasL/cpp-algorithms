//#include<iostream>
//#include<vector>
//using namespace std;
////当i<=N时，经过一次洗牌后位置变为2i
////当i>N时，经过一次洗牌后位置变为(i-n)*2-1
//int main(void)
//{
//	int N;
//	while (cin>>N)
//	{
//		int pos = 1;
//		unsigned long long cnt = 0;
//		while (true)
//		{
//			if (pos <= N)
//				pos = 2 * pos;
//			else pos = 2 * (pos - N) - 1;
//			cnt++;
//			if (pos == 1) break;
//		}
//		cout << cnt << endl;
//		
//	}
//}