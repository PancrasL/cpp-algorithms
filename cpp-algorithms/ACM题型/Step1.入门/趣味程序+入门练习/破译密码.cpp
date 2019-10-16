//#include<vector>
//#include<iostream>
//using namespace std;
//bool inBound(char c) {
//	return (c >= 'A') && (c <= 'Z');
//}
//int main(void) {
//	int N;
//	while (cin >> N)
//	{
//		vector<char> code(N);
//		int temp;
//		for (int i = 0; i < N; i++) {
//			cin >> temp;
//			code[i] = temp;
//		}
//		char key;
//		for (key = 'A'; key <= 'Z'; key++) {
//			int i;
//			for (i = 0; i < code.size(); i++) {
//				if (!inBound(code[i] ^ key))
//					break;
//			}
//			if (i == code.size())
//				break;
//		}
//
//		for (int i = 0; i < code.size(); i++) {
//			cout << (char)(code[i] ^ key);
//		}
//		cout << endl;
//	}
//	return 0;
//}