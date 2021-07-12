//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int M;
//	cin >> M;
//	while (M--)
//	{
//		string pass;
//		cin >> pass;
//		vector<int> cnt(4, 0);
//		if (pass.size() >= 8 && pass.size() <= 16)
//		{
//			for (int i = 0; i < pass.size(); i++)
//			{
//				if (pass[i] >= 'A'&&pass[i] <= 'Z') cnt[0]++;
//				else if (pass[i] >= 'a'&&pass[i] <= 'z') cnt[1]++;
//				else if (pass[i] >= '0'&&pass[i] <= '9') cnt[2]++;
//				else cnt[3]++;
//			}
//			int count = 0;
//			count = (cnt[0] > 0) + (cnt[1] > 0) + (cnt[2] > 0) + (cnt[3] > 0);
//			if (count >= 3) cout << "YES" << endl;
//			else cout << "NO" << endl;
//		}
//		else
//		{
//			cout << "NO" << endl;
//		}
//	}
//}