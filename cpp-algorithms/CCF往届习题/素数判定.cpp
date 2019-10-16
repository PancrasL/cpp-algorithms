//#include<iostream>
//#include<vector>
//using namespace std;
//#define f(x) (x*x+x+41)
//bool isprime(int num)
//{
//	for (int i = 2; i*i <= num; i++)
//	{
//		if (num%i == 0) return false;
//	}
//	return true;
//}
//int main(void)
//{
//	vector<int> num;
//	for (int i = -39; i <= 50; i++)
//	{
//		if (!isprime(f(i))) num.push_back(i);
//	}
//	int x, y;
//	while (true)
//	{
//		cin >> x >> y;
//		if (!x && !y) break;
//		int i;
//		for (i = 0; i < num.size(); i++)
//		{
//			if (num[i] >= x && num[i] <= y) break;
//		}
//		if (i == num.size()) cout << "OK" << endl;
//		else cout << "Sorry" << endl;
//	}
//}