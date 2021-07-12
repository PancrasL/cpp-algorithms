//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Node {
//	int num;
//	int sig;
//	bool operator<(Node &b)
//	{
//		return num > b.num;
//	}
//	Node(int num1 = 0, int sig1 = 0) :num(num1), sig(sig1){};
//};
//int main(void)
//{
//	int n;
//	while (true)
//	{
//		cin >> n;
//		if (n == 0) break;
//		vector<Node> v;
//		for (int i = 0; i < n; i++)
//		{
//			int a;
//			cin >> a;
//			if (a >= 0)
//			{
//				v.push_back(Node(a, 1));
//			}
//			else v.push_back(Node(-a, -1));
//		}
//		sort(v.begin(), v.end());
//		cout << v[0].num*v[0].sig;
//		for (int i = 1; i < v.size(); i++)
//		{
//			cout << ' ' << v[i].num*v[i].sig;
//		}
//		cout << endl;
//	}
//}