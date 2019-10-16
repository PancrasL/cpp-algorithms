//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector<int> v(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> v[i];
//	}
//	int max_area = 0;
//	for (int i = 1; i <= n; i++)//枚举所有可能的矩形
//	{
//		int left, right;
//		left = right = i;
//		while (left > 0 && v[left] >= v[i])
//			left--;
//		left++;
//		while (right <= n && v[right] >= v[i])
//			right++;
//		right--;
//		int area = v[i] * (right - left + 1);
//		if (area > max_area)
//			max_area = area;
//	}
//	cout << max_area;
//}