//#include<iostream>
//#include<set>
//using namespace std;
//int main(void)
//{
//	set<int> s;
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int num;
//		scanf("%d", &num);
//		s.insert(num);
//	}
//	set<int>::iterator it = s.begin();
//	int ans = 0;
//	while (it != s.end() && *it < 0)
//	{
//		int temp = *it*-1;
//		if (s.find(temp) != s.end())
//			ans++;
//		it++;
//	}
//	cout << ans << endl;
//	return 0;
//}