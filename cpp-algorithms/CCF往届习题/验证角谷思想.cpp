//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//int main(void)
//{
//	int N;
//	cin >> N;
//	while (N--)
//	{
//		int num;
//		cin >> num;
//		set<int> S;
//		vector<int> v;
//		while (num != 1)
//		{
//			if (S.find(num) != S.end())
//				break;
//			if (num & 1)
//			{
//				v.push_back(num);
//				S.insert(num);
//				num = num * 3 + 1;
//			}
//			else
//			{
//				S.insert(num);
//				num >>= 1;
//			}
//		}
//		if (num == 1&&v.size())
//		{
//			cout << v[0];
//			for (int i = 1; i < v.size(); i++)
//				cout << ' ' << v[i];
//		}
//		else cout << "No number can be output !";
//		cout << endl;
//	}
//}