//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<stdio.h>
//#include<string>
//using namespace std;
//struct Node {
//	int inTime;
//	int outTime;
//};
//int main(void)
//{
//	int N;
//	cin >> N;
//	while (N--)
//	{
//		int M;
//		cin >> M;
//		string earliest_id, latest_id;//最早和最晚人的id
//		int earliest_time, latest_time;//最早和最晚人的实践
//		int a, b, c;
//		earliest_time = INT_MAX; latest_time = INT_MIN;
//		for (int i = 0; i < M; i++)
//		{
//			string id;
//			cin >> id;
//			scanf("%d:%d:%d", &a, &b, &c);
//			int time1 = a * 10000 + b * 100 + c;
//			scanf("%d:%d:%d", &a, &b, &c);
//			int time2 = a * 10000 + b * 100 + c;
//			if (time1 < earliest_time)
//			{
//				earliest_time = time1;
//				earliest_id = id;
//			}
//			if (time2 > latest_time)
//			{
//				latest_time = time2;
//				latest_id = id;
//			}
//			
//		}
//		cout << earliest_id << ' ' << latest_id << endl;
//	}
//}