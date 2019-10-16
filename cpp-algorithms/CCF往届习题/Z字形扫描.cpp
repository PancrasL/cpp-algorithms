//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int n;
//int matrix[501][501];
//int main(void)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			cin >> matrix[i][j];
//	int row, col;
//	row = col = 0;
//	bool direction = 1;//direction=1,左下到右上。direction=0，右上到左下
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i;)
//		{
//			cout << matrix[row][col] << ' ';
//			if (++j > i) 
//				break;
//			if (direction) { row--; col++; }
//			else { row++; col--; }
//		}
//		if (direction) col++;
//		else row++;
//		direction = !direction;
//	}
//	if (direction) { row--; col++; }
//	else { row++; col--; }
//	for (int i = n-1; i >= 1; i--)
//	{
//		for (int j = 1; j <= i;)
//		{
//			cout << matrix[row][col] << ' ';
//			if (++j > i) break;
//			if (direction)
//			{
//				row--; col++;
//			}
//			else
//			{
//				row++; col--;
//			}
//		}
//		if (direction) row++;
//		else col++;
//		direction = !direction;
//	}
//}