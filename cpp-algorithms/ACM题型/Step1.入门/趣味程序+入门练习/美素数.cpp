//#include<vector>
//#include<iostream>
//using namespace std;
//#define MAX 1000000
//vector<int> isPrime(MAX + 1, 1);
//
////ɸ����ȡ����
//void filter(vector<int> &isPrime) {
//	isPrime[0] = isPrime[1] = 0;
//	for (int i = 2; i <= MAX; i++) {
//		if (isPrime[i]) {
//			for (int j = i + i; j <= MAX; j += i)
//				isPrime[j] = 0;
//		}
//	}
//}
//
////����һ�����ĸ���λ֮��
//int sumOfNum(int number) {
//	int sum = 0;
//	while (number) {
//		sum += number % 10;
//		number /= 10;
//	}
//	return sum;
//}
//
////�����0-MAX֮���������ĸ���
//vector<int> beautifulNumber(MAX + 1);//0-index֮����������ĸ���
//void getAns() {
//	filter(isPrime);
//	for (int i = 1; i <= MAX; i++) {
//		if (isPrime[i] && isPrime[sumOfNum(i)]) {
//			beautifulNumber[i] = beautifulNumber[i - 1] + 1;
//		}
//		else beautifulNumber[i] = beautifulNumber[i - 1];
//	}
//}
//int main(void) {
//	getAns();
//	int T, L, R;
//	cin >> T;
//	for (int i = 1; i <= T; i++) {
//		cin >> L >> R;
//		cout << "Case #" << i << ": ";
//		cout << beautifulNumber[R] - beautifulNumber[L - 1] << endl;
//	}
//	return 0;
//}