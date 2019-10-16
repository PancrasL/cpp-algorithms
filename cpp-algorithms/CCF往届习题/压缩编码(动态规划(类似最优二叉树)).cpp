//#include<iostream>
//#include<vector>
//using namespace std;
//int n;
//int w[1001][1001];//w[i][j]表示包含单词ai-aj的子树的频率和
//int c[1001][1001];//c[i][j]表示包含单词ai-aj的总长度
//int main(void)
//{
//	cin >> n;
//	vector<int> frequence(n+1);
//	for (int i = 1; i <= n; i++)
//		cin >> frequence[i];
//	for (int i = 1; i <= n; i++)
//	{
//		c[i][i] = 0;
//		w[i][i] = frequence[i];
//	}
//	for (int L = 2; L <= n; L++)//包含的单词数从2增长到n
//	{
//		for (int i = 1; i <= n - L + 1; i++)
//		{
//			int j = i + L - 1;//子树包含关键字ai-aj
//			w[i][j] = w[i][i] + w[i + 1][j];//计算包含关键字ai-aj的子树的频率和
//			int min_cost = INT_MAX;
//			for (int k = i; k < j; k++)//将子树分为ai-ak和ak+1-aj两部分
//			{
//				int curcost = c[i][k] + c[k + 1][j] + w[i][j];
//				if (curcost < min_cost) 
//					min_cost = curcost;
//			}
//			c[i][j] = min_cost;
//		}
//	}
//	cout << c[1][n] << endl;
//	return 0;
//}