//#include<iostream>
//#include<string>	
//#include<vector>
//using namespace std;
//int main(void)
//{
//	vector<vector<char>> matrix;
//	int M, N;
//	cin >> M >> N;
//	matrix.resize(M);
//	for (int i = 0; i < M; i++)
//		matrix[i].resize(N);
//	char c = 'A';
//	int row1, row2, cal1, cal2;
//	row1 = cal1 = 0; row2 = M - 1; cal2 = N - 1;
//	while (true)
//	{
//		for (int i = cal1; i <= cal2; i++)
//		{
//			matrix[row1][i] = c;
//			if (++c > 'Z') c = 'A';
//		}
//		row1++;
//		if (row1 > row2) break;
//		for (int i = row1; i <= row2; i++)
//		{
//			matrix[i][cal2] = c;
//			if (++c > 'Z') c = 'A';
//		}
//		cal2--;
//		if (cal2 < cal1) break;
//		for (int i = cal2; i >= cal1; i--)
//		{
//			matrix[row2][i] = c;
//			if (++c > 'Z') c = 'A';
//		}
//		row2--;
//		if (row1 > row2) break;
//		for (int i = row2; i >= row1; i--)
//		{
//			matrix[i][cal1] = c;
//			if (++c > 'Z') c = 'A';
//		}
//		cal1++;
//		if (cal1 > cal2) break;
//	}
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//			cout << "   " << matrix[i][j];
//		cout << endl;
//	}
//	return 0;
//}