//#include<vector>
//#include<iostream>
//using namespace std;
//#define MAX_NUM 10000
//vector<int> isPrime(MAX_NUM + 1, 1);
//void filter(vector<int> &isPrime)//筛法获取素数
//{
//	isPrime[0] = isPrime[1] = 0;
//	for (int i = 2; i <= MAX_NUM; i++) {
//		if (isPrime[i] == 1) {
//			for (int j = i + i; j <= MAX_NUM; j += i) {
//				isPrime[j] = 0;
//			}
//		}
//	}
//}
//int getAns(int number) {
//	int cnt = 0;
//	for (int i = 2; i <= number / 2; i++) {
//		if (isPrime[i] && isPrime[number - i] && (i != number - i))
//			cnt++;
//	}
//	return cnt;
//}
//int main(void) {
//	filter(isPrime);
//	int number;
//	cin >> number;
//	while (number)
//	{
//		cout << getAns(number) << endl;
//		cin >> number;
//	}
//	return 0;
//}