//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> ans;
//bool isSpecial(int number) {
//	int a, b, c;
//	a = number / 100;
//	b = (number % 100) / 10;
//	c = number % 10;
//
//	if ((a * a * a + b * b * b + c * c * c) == number)
//		return true;
//	return false;
//
//}
//int main(void) {
//	//找出所有的水仙花数
//	for (int i = 100; i < 1000; i++) {
//		if (isSpecial(i))
//			ans.push_back(i);
//	}
//
//	//输出在范围内的水仙花数
//	int m, n;
//	while (cin >> m >> n)
//	{
//		int index = 0;
//		for (index = 0; index < ans.size(); index++) {
//			if (ans[index] >= m)
//				break;
//		}
//		if (index == ans.size() || ans[index] > n)
//			cout << "no" << endl;
//		else {
//			cout << ans[index++];
//			while (index < ans.size() && ans[index] <= n)
//				cout << ' ' << ans[index++];
//			cout << endl;
//		}
//	}
//	return 0;
//}