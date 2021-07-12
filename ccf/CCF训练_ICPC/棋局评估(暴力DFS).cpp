//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int matrix[4][4];//表示3*3的棋盘,0为空，1为Alice，2为Bob
//bool win()//判断当前棋局下是否胜利
//{
//	for (int i = 1; i <= 3; i++)
//	{
//		if (matrix[i][1] != 0 && matrix[i][1] == matrix[i][2] && matrix[i][2] == matrix[i][3]) return true;//同一行
//		if (matrix[1][i] != 0 && matrix[1][i] == matrix[2][i] && matrix[2][i] == matrix[3][i]) return true;//同一列
//	}
//	if (matrix[1][1] != 0 && matrix[1][1] == matrix[2][2] && matrix[2][2] == matrix[3][3]) return true;
//	if (matrix[1][3] != 0 && matrix[1][3] == matrix[2][2] && matrix[2][2] == matrix[3][1]) return true;
//	return false;
//}
//int space()//统计棋盘上的空格数
//{
//	int cnt = 0;
//	for (int i = 1; i <= 3; i++)
//		for (int j = 1; j <= 3; j++)
//			if (matrix[i][j] == 0) cnt++;
//	return cnt;
//}
//int DFS(int role)//role=1,Alice执棋，role=2，Bob执棋
//{
//	int score = space();//统计空格数
//	if (win())//当前棋局下已经分出胜负
//	{
//		score++;
//		if (role == 1)
//			return -score;//轮到Alice执棋，但是Bob已经胜利
//		else return score;//轮到Bob执棋，但是Alice已经胜利
//	}
//	else if (score == 0) return 0;//
//	int minScore = INT_MAX, maxScore = INT_MIN;
//	for (int i = 1; i <= 3; i++)//搜索所有可以下棋的位置
//		for (int j = 1; j <= 3; j++)
//		{
//			if (matrix[i][j] == 0)
//			{
//				matrix[i][j] = role;
//				if (role == 1)
//				{
//					maxScore = max(maxScore, DFS(2));
//				}
//				else
//				{
//					minScore = min(minScore, DFS(1));
//				}
//				matrix[i][j] = 0;
//			}
//		}
//	if (role == 1) return maxScore;
//	else return minScore;
//}
//int main(void)
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		for (int i = 1; i <= 3; i++)
//			for (int j = 1; j <= 3; j++)
//				cin >> matrix[i][j];
//		cout << DFS(1) << endl;
//	}
//	return 0;
//}