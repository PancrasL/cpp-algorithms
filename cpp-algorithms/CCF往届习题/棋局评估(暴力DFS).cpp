//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int matrix[4][4];//��ʾ3*3������,0Ϊ�գ�1ΪAlice��2ΪBob
//bool win()//�жϵ�ǰ������Ƿ�ʤ��
//{
//	for (int i = 1; i <= 3; i++)
//	{
//		if (matrix[i][1] != 0 && matrix[i][1] == matrix[i][2] && matrix[i][2] == matrix[i][3]) return true;//ͬһ��
//		if (matrix[1][i] != 0 && matrix[1][i] == matrix[2][i] && matrix[2][i] == matrix[3][i]) return true;//ͬһ��
//	}
//	if (matrix[1][1] != 0 && matrix[1][1] == matrix[2][2] && matrix[2][2] == matrix[3][3]) return true;
//	if (matrix[1][3] != 0 && matrix[1][3] == matrix[2][2] && matrix[2][2] == matrix[3][1]) return true;
//	return false;
//}
//int space()//ͳ�������ϵĿո���
//{
//	int cnt = 0;
//	for (int i = 1; i <= 3; i++)
//		for (int j = 1; j <= 3; j++)
//			if (matrix[i][j] == 0) cnt++;
//	return cnt;
//}
//int DFS(int role)//role=1,Aliceִ�壬role=2��Bobִ��
//{
//	int score = space();//ͳ�ƿո���
//	if (win())//��ǰ������Ѿ��ֳ�ʤ��
//	{
//		score++;
//		if (role == 1)
//			return -score;//�ֵ�Aliceִ�壬����Bob�Ѿ�ʤ��
//		else return score;//�ֵ�Bobִ�壬����Alice�Ѿ�ʤ��
//	}
//	else if (score == 0) return 0;//
//	int minScore = INT_MAX, maxScore = INT_MIN;
//	for (int i = 1; i <= 3; i++)//�������п��������λ��
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