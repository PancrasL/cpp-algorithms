//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int K;
//	while (true)
//	{
//		cin >> K;
//		if (K == 0) break;
//		vector<int> num(K);
//		for (int i = 0; i < K; i++)
//		{
//			cin >> num[i];
//		}
//		int begin, end, sum;//当前子序列
//		int max_begin, max_end, max_sum;//最大子序列
//		max_begin = max_end = 0; max_sum = num[0];
//		begin = 0; end = -1; sum = 0;
//		while (true)
//		{
//			if (++end == K) break;
//			sum += num[end];
//			if (sum < 0)
//			{
//				begin = end + 1;
//				sum = 0;
//			}
//			else if (sum > max_sum)
//			{
//				max_sum = sum;
//				max_begin = begin;
//				max_end = end;
//			}
//		}
//		if (max_sum < 0)
//			cout << 0 << ' ' << num[0] << ' ' << num[K - 1] << endl;
//		else cout << max_sum << ' ' << num[max_begin] << ' ' << num[max_end] << endl;
//	}
//}