//#include<iostream>
//#include<vector>
//using namespace std;
//struct Line {//表示一排座位
//	int num;//表示这排座位剩下的空座位数
//	bool sit[6];//标识被占用的座位
//	Line()
//	{
//		num = 5;
//		for (int i = 1; i <= 5; i++)
//			sit[i] = 0;
//	}
//};
//vector<Line> row(20);
//int main(void)
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int p;
//		cin >> p;
//		/*判断能否安放在同一排*/
//		int i;
//		for (i = 0; i < row.size(); i++)
//		{
//			if (p <= row[i].num) break;//可以放到第i排
//		}
//		if (i != row.size())//可以分配到同一排
//		{
//			for (int j = 1; j <= 5; j++)
//			{
//				if (!row[i].sit[j])
//				{
//					row[i].num--;
//					row[i].sit[j] = true;
//					cout << i * 5 + j << ' ';
//					if (--p == 0) break;
//				}
//			}
//			cout << endl;
//		}
//		else//不能分配到同一排
//		{
//			for (int i = 0; i < row.size(); i++)
//			{
//				for (int j = 1; j <= 5; j++)
//				{
//					if (!row[i].sit[j])
//					{
//						row[i].num--;
//						row[i].sit[j] = true;
//						cout << i * 5 + j << ' ';
//						if (--p == 0) break;
//					}
//				}
//				if (p == 0) break;//座位分配完毕
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}