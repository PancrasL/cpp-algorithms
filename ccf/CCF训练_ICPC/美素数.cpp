//#include<iostream>
//#include<vector>
//using namespace std;
//#define SIZE 1000000
//vector<int> num(SIZE+1, 1);
//vector<int> cnt(SIZE + 1, 0);
//int main(void)
//{
//	num[1] = 0;
//	for (int i = 2; i <= SIZE; i++)
//	{
//		cnt[i] = cnt[i - 1];
//		if (num[i])
//		{
//			int temp = i;
//			int sum = 0;
//			while (temp)
//			{
//				sum += temp % 10;
//				temp /= 10;
//			}
//			if (num[sum]) cnt[i]++;
//			for (int j = 2 * i; j <= SIZE; j += i)
//			{
//				num[j] = 0;
//			}
//		}
//	}
//	int T;
//	cin >> T;
//	for (int i = 1; i <= T; i++)
//	{
//		int L, R;
//		cin >> L >> R;
//		cout << "Case #" << i << ": ";
//		cout << cnt[R]-cnt[L-1] << endl;
//	}
//}