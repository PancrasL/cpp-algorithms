//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct Node
//{
//	int begin;
//	int end;
//	Node() {};
//	Node(int begin1, int end1) :begin(begin1), end(end1) {};
//	bool operator<(Node &b)
//	{
//		return end < b.end;
//	}
//};
//int main(void)
//{
//	int n;
//	while (true)
//	{
//		cin >> n;
//		if (n == 0) break;
//		vector<Node> v;
//		int i, j;
//		for (int k = 0; k < n; k++)
//		{
//			cin >> i >> j;
//			v.push_back(Node(i, j));
//		}
//		sort(v.begin(), v.end());
//		int ans = 0, end = 0;
//		int k = 0;
//		while (true)
//		{
//			while (k<v.size()&& v[k].begin < end)
//			{
//				k++;
//			}
//			if (k == v.size()) break;
//			ans++; end = v[k].end;
//		}
//		cout << ans << endl;
//	}
//}