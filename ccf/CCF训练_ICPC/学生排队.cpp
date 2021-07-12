//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct Student
//{
//	int id;
//	int pos;
//	Student() {};
//	Student(int id1, int pos1) :id(id1), pos(pos1) {};
//};
//bool cmp(const Student &s1, const Student &s2)
//{
//	return s1.id < s2.id;
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector<int> v(n + 1);
//	/*初始化队伍*/
//	for (int i = 1; i <= n; i++)
//	{
//		v[i] = i;
//	}
//	/*调整位置*/
//	int m;
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int p, q;//id,位置
//		cin >> p >> q;
//		int pos;
//		for (pos = 1; pos <= n; pos++)//寻找学号为p的学生的位置
//			if (v[pos] == p)
//				break;
//		if (q < 0)//向前移动
//		{
//			while (q++)
//			{
//				swap(v[pos], v[pos - 1]);
//				pos--;
//			}
//		}
//		else//向后移动
//		{
//			while (q--)
//			{
//				swap(v[pos], v[pos + 1]);
//				pos++;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//		cout << v[i] << ' ';
//	return 0;
//}