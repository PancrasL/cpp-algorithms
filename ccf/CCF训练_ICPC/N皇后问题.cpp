//#include<iostream>
//#include<vector>
//using namespace std;
//bool isOK(int row, int col, vector<int> &pos)
//{
//	for (int i = 0; i < row; i++)
//	{
//		if (row + col == i + pos[i]) return false;//同一斜线上
//		if (row - col == i - pos[i]) return false;//同一反斜线上
//		if (col == pos[i]) return false;//同一列上
//	}
//	return true;
//}
//int DFS(int row, vector<int> &pos)
//{
//	if (row == pos.size()) return 1;
//	int sum = 0;
//	for (int i = 0; i < pos.size(); i++)
//	{
//		if (isOK(row,i,pos))
//		{
//			pos[row] = i;
//			sum += DFS(row + 1, pos);
//		}
//	}
//	return sum;
//}
//int main(void)
//{
//	int N;
//	vector<int> res(11, -1);
//	while (true)
//	{
//		cin >> N;
//		if (res[N] != -1)
//		{
//			cout << res[N] << endl;
//			continue;
//		}
//		if (N == 0) break;
//		vector<int> pos(N);
//		int sum = 0;
//		for (int i = 0; i < N; i++)
//		{
//			pos[0] = i;
//			sum+=DFS(1, pos);
//		}
//		res[N] = sum;
//		cout << sum << endl;
//	}
//	return 0;
//}