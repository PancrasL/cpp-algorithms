//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct ball {
//	int id;//小球编号
//	int pos;//小球位置
//	int move;//小球的移动量
//	ball(int a = 0, int b = 0, int c = 1) :id(a), pos(b), move(c) {};
//};
//bool cmp1(ball &a, ball &b)
//{
//	return a.pos < b.pos;
//}
//bool cmp2(ball &a, ball &b)
//{
//	return a.id < b.id;
//}
//int main(void)
//{
//	int n, L, t;
//	cin >> n >> L >> t;
//	vector<ball> v(n);
//	for (int i = 0; i < n; i++)
//	{
//		v[i].id = i;
//		cin >> v[i].pos;
//	}
//	sort(v.begin(), v.end(), cmp1);
//	for (int i = 1; i <= t; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (j == 0)//第一个球
//			{
//				v[0].pos += v[0].move;
//				if (v[0].pos == 0) v[0].move = 1;
//				else if (v[0].pos == L) v[0].move = -1;
//			}
//			else if (j == n - 1)//最后一个球
//			{
//				v[n - 1].pos += v[n - 1].move;
//				if (v[n - 1].pos == L) v[n - 1].move = -1;
//				else if (v[n - 1].pos == v[n - 2].pos)
//				{
//					v[n - 1].move *= -1;
//					v[n - 2].move *= -1;
//				}
//			}
//			else {
//				v[j].pos += v[j].move;
//				if (v[j].pos == v[j - 1].pos)
//				{
//					v[j].move *= -1;
//					v[j - 1].move *= -1;
//				}
//			}
//		}
//	}
//	sort(v.begin(), v.end(), cmp2);
//	for (int i = 0; i < n; i++)
//	{
//		cout << v[i].pos << ' ';
//	}
//	return 0;
//}