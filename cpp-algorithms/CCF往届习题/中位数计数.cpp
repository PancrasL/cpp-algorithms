//#include<vector>
//#include<algorithm>
//#include<iostream>
//#include<memory.h>
//using namespace std;
//int mp[8000 * 2 + 2];
//#define MOV 8000
//int main(void)
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v(n);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> v[i];
//		}
//
//		for (int i = 0; i < n; i++)
//		{
//			memset(mp, 0, sizeof(mp));
//			int cnt = 0;
//			int left, right;
//			mp[MOV] = 1;
//			for (right = i + 1; right < n; right++)//ÓÒÉ¨Ãè
//			{
//				if (v[right] > v[i])
//				{
//					cnt++;
//				}
//				else
//				{
//					cnt--;
//				}
//				mp[cnt + MOV]++;
//			}
//			int ans = mp[MOV];
//			cnt = 0;
//			for (left = i - 1; left >= 0; left--)//×óÉ¨Ãè
//			{
//				if (v[left] > v[i])
//				{
//					cnt--;
//				}
//				else
//				{
//					cnt++;
//				}
//				ans += mp[cnt + MOV];
//			}
//			if (i == n - 1) cout << ans << endl;
//			else
//				cout << ans << ' ';
//		}
//	}
//	return 0;
//}