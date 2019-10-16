//#include<vector>
//#include<iostream>
//using namespace std;
//#define MAX 10000
//vector<int> isPrime(MAX + 1, 1);
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
//int getAns(int number) {
//	for (int i = number / 2; i >= 2; i--) {
//		if (isPrime[i] && isPrime[number - i])
//			return i;
//	}
//	return -1;
//}
//int main(void) {
//	filter(isPrime);
//	int number;
//	while (cin >> number) {
//		int ans = getAns(number);
//		cout << ans << ' ' << number - ans << endl;
//	}
//	return 0;
//}