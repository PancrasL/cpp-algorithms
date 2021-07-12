//#include<iostream>
//#include<vector>
//using namespace std;
//struct window {
//	int x1, y1;
//	int x2, y2;
//	int id;
//	window() {};
//	window(int a1, int b1, int a2, int b2, int id1) :x1(a1), y1(b1), x2(a2), y2(b2), id(id1) {};
//};
//int main(void)
//{
//	int N, M;
//	cin >> N >> M;
//	/*录入窗口位置*/
//	vector<window> v;
//	int x1, y1, x2, y2;
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> x1 >> y1 >> x2 >> y2;
//		v.push_back(window(x1, y1, x2, y2, i));
//	}
//	/*模拟点击*/
//	for (int i = 0; i < M; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		int index = -1;//保存被点中的窗口下标
//		for (int i = v.size() - 1; i >= 0; i--)
//		{
//			if (x >= v[i].x1&&x <= v[i].x2&&y >= v[i].y1&&y <= v[i].y2)
//			{
//				index = i;
//				break;
//			}
//		}
//		if (index != -1)
//		{
//			window temp = v[index];
//			v.erase(v.begin() + index);
//			v.push_back(temp);
//			cout << temp.id << endl;
//		}
//		else cout << "IGNORED" << endl;
//	}
//	return 0;
//}