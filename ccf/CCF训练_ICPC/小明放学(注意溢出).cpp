//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(void)
//{
//	int r, y, g, n, k, t;
//	unsigned long long res;
//	cin >> r >> y >> g >> n;
//	int pos;
//	res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> k >> t;
//		switch (k)
//		{
//		case 0://µÀÂ·
//			res += t;
//			break;
//		case 1://ºìµÆ
//			pos = r - t;
//			pos = (pos + res) % (r + y + g);
//			if (pos < r) res = res + r - pos;
//			else if (pos < r + g) res = res;
//			else res = res + r + y + g - pos + r;
//			break;
//		case 2://»ÆµÆ
//			pos = r + g + y - t;
//			pos = (pos + res) % (r + y + g);
//			if (pos < r) res = res + r - pos;
//			else if (pos < r + g) res = res;
//			else res = res + r + y + g - pos + r;
//			break;
//		default://ÂÌµÆ
//			pos = r + g - t;
//			pos = (pos + res) % (r + y + g);
//			if (pos < r) res = res + r - pos;
//			else if (pos < r + g) res = res;
//			else res = res + r + y + g - pos + r;
//			break;
//		}
//	}
//	cout << res;
//}