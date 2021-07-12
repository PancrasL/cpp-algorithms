//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> primeNum(1001, 1);
//vector<int> cnt(1001, 0);
//void getnum()//筛法获取素数
//{
//	primeNum[0] = primeNum[1] = 0;
//	for (int i = 2; i < 1000; i++)
//	{
//		if (primeNum[i])//i是素数
//		{
//			for (int j = i + i; j < 1000; j += i)
//			{
//				primeNum[j] = 0;
//			}
//			/*判断回文数*/
//			int nT = 0;//i的回文数
//			int temp = i;
//			while (temp)
//			{
//				nT = nT * 10 + temp % 10;
//				temp /= 10;
//			}
//			if (nT == i) 
//				cnt[i] = cnt[i - 1] + 1;
//			else cnt[i] = cnt[i - 1];
//		}
//		else cnt[i] = cnt[i - 1];
//	}
//}
//int main(void)
//{
//	getnum();
//	int n;
//	while (cin>>n)
//	{
//		cout << cnt[n]-cnt[10] << endl;
//	}
//}