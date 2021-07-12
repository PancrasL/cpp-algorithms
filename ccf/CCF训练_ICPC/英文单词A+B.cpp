//#include<iostream>
//#include<string>	
//#include<map>	
//using namespace std;
//map<string, int> mp;
//int main(void)
//{
//	mp[string("zero")] = 0; mp[string("one")] = 1; mp[string("two")] = 2;
//	mp[string("three")] = 3; mp[string("four")] = 4; mp[string("five")] = 5;
//	mp[string("six")] = 6; mp[string("seven")] = 7; mp[string("eight")] = 8;
//	mp[string("nine")] = 9;
//	int A, B;
//	string s1, s2;
//	while (true)
//	{
//		cin >> s1;
//		A = 0;
//		while (s1!="+")
//		{
//			A = A * 10 + mp[s1];
//			cin >> s1;
//		}
//		B = 0;
//		cin >> s2;
//		while (s2 != "=")
//		{
//			B = B * 10 + mp[s2];
//			cin >> s2;
//		}
//		if (A==0&&B==0) break;
//		else cout << A + B << endl;
//	}
//	return 0;
//}