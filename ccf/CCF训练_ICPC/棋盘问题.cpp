//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> visited;
//int n, k;
//int DFS(int row, int col,vector<vector<char> > &v,int num)
//{	
//	if (num == 0) return 1;
//	if (n - row + 1 < num) return 0;//ʣ�µ���������С��δ�ŵ�������
//	int ans = 0;//ͳ�Ʒ�����
//	for(int i=row;i<=n;i++)
//		for (int j = 1; j <= n; j++)
//		{
//			if (v[i][j] == '#'&&visited[j] == 0)
//			{
//				visited[j] = 1;
//				ans += DFS(i + 1, 1, v, num - 1);
//				visited[j] = 0;
//			}
//		}
//	return ans;
//}
//int main(void)
//{
//	while (cin>>n>>k)
//	{
//		if (n == -1 && k == -1) break;
//		vector<vector<char> > matrix(n+1);
//		for (int i = 1; i <= n; i++)//��ʼ��n*n������
//			matrix[i].assign(n+1, 0);
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				cin >> matrix[i][j];
//		int ans = 0;
//		for(int i=1;i<=n-k+1;i++)//��k�����ӣ���һ���������ŵ���n-k+1��
//			for (int j = 1; j <= n; j++)
//			{
//				visited.assign(9, 0);//���ĳһ���Ƿ�������
//				if (matrix[i][j] == '#')
//				{
//					visited[j] = 1;
//					ans += DFS(i + 1, 1, matrix, k - 1);//Ѱ����һ�����ӵ�λ��,�����ط�����
//					visited[j] = 0;
//				}
//			}
//		cout << ans << endl;
//	}
//}