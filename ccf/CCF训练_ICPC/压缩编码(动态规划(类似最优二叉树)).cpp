//#include<iostream>
//#include<vector>
//using namespace std;
//int n;
//int w[1001][1001];//w[i][j]��ʾ��������ai-aj��������Ƶ�ʺ�
//int c[1001][1001];//c[i][j]��ʾ��������ai-aj���ܳ���
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
//	for (int L = 2; L <= n; L++)//�����ĵ�������2������n
//	{
//		for (int i = 1; i <= n - L + 1; i++)
//		{
//			int j = i + L - 1;//���������ؼ���ai-aj
//			w[i][j] = w[i][i] + w[i + 1][j];//��������ؼ���ai-aj��������Ƶ�ʺ�
//			int min_cost = INT_MAX;
//			for (int k = i; k < j; k++)//��������Ϊai-ak��ak+1-aj������
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