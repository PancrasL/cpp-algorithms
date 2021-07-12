//#include<iostream>
//#include<vector>
//using namespace std;
//int visited[301][301][301];
//int n;
//vector<int> First, Second;//第一天的菜价、第二天的菜价
//bool findAns;
//bool persuit(int i)//求解第i个店铺的菜价
//{
//	if (i == n - 1)//是最后一家店铺
//	{
//		if (n == 2)//只有两家店铺
//		{
//			int base = 2 * Second[i-1] - First[i-1];
//			for (int k = 0; k < 2; k++)
//			{
//				if ((base + k + First[i-1]) / 2 == Second[i])
//				{
//					findAns = true;
//					First.push_back(base + k);
//					return true;
//				}
//			}
//			return false;
//		}
//		else
//		{
//			int base = 3 * Second[i - 1] - First[i - 1] - First[i - 2];
//			for (int k = 0; k < 3; k++)
//			{
//				if ((base + k + First[i - 1]) / 2 == Second[i])
//				{
//					findAns = true;
//					First.push_back(base + k);
//					return true;
//				}
//			}
//			return false;
//		}
//	}
//	if (i == 1)//是第二家店铺
//	{
//		int price;
//		for (price = 2 * Second[0] - First[0]; price <= 2 * Second[0] - First[0] + 1; price++)
//		{
//			if (price <= 0) continue;//非法菜价
//			First.push_back(price);
//			if (persuit(i + 1)) return true;
//			First.pop_back();
//		}
//	}
//	else
//	{
//		if (visited[i][First[i - 1]][First[i - 2]])
//			return false;
//		visited[i][First[i - 1]][First[i - 2]] = true;
//		int base = 3 * Second[i - 1] - First[i - 1] - First[i - 2];
//		for (int k = 0; k < 3; k++)
//		{
//			if (base + k <= 0) continue;
//			First.push_back(base + k);
//			if (persuit(i + 1)) return true;
//			First.pop_back();
//		}
//		return false;
//	}
//	return false;
//}
//int main(void)
//{
//	cin >> n;
//	Second.resize(n);//第二天的菜价
//	for (int i = 0; i < n; i++)
//		cin >> Second[i];
//	for (int i = 1; i < 2 * Second[0]; i++)//第一天的菜价范围是1-2*Second[0]
//	{
//		First.push_back(i);
//		if (persuit(1)) break;
//		First.pop_back();
//	}
//	for (int i = 0; i < n; i++)
//		cout << First[i] << ' ';
//	cout << endl;
//	return 0;
//}