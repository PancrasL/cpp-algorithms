//#include<iostream>
//#include<vector>
//using namespace std;
//int tax[] = { 45,300,900,6500,6000,8750 };
//int totaltax[] = { 45,345,1245,7745,13745,22495 };
//int realwage[] = { 1455,4155,7755,27255,41255,57505 };
//int salary[] = { 1500,4500,9000,35000,55000,80000 };
//double rate[] = { 0.95,0.9,0.8,0.75,0.7,0.65,0.55 };
//int main(void)
//{
//	int T;
//	cin >> T;
//	if (T <= 3500) cout << T << endl;
//	else {
//		T -= 3500;
//		int S = 0;
//		int i;
//		for (i = 0; i < 6; i++)//寻找到税后工资所在的范围
//		{
//			if (realwage[i] > T) break;
//		}
//		i--;
//		T -= realwage[i];
//		S += salary[i];
//		S += T / rate[i + 1];
//		cout << S+3500 << endl;
//	}
//	return 0;
//}