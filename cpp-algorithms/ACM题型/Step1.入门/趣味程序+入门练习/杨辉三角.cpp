//#include<iostream>
//#include<vector>
//using namespace std;
//#define MAX 30
//int matrix[MAX + 1][MAX + 1];
//void getAns(void) {
//	matrix[1][1] = 1;
//	for (int i = 1; i <= MAX; i++) {
//		for (int j = 2; j < i; j++) {
//			matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j];
//		}
//		matrix[i][1] = matrix[i][i] = 1;
//	}
//}
//
//void printAns(int stages) {
//	for (int i = 1; i <= stages; i++) {
//		cout << matrix[i][1];
//		for (int j = 2; j <= i; j++) {
//			cout << ' ' << matrix[i][j];
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//int main(void) {
//	getAns();
//	int stages;
//	while (cin >> stages)
//	{
//		printAns(stages);
//	}
//	return 0;
//}