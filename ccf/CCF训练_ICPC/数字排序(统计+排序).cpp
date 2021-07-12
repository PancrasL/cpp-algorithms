//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//struct Node
//{
//	int val;
//	int cnt;
//	Node() {};
//	Node(int val1, int cnt1) :val(val1), cnt(cnt1) {};
//	bool operator<(Node &node)
//	{
//		if (cnt == node.cnt)
//			return val < node.val;
//		else
//			return cnt > node.cnt;
//	}
//};
//int main(void)
//{
//	vector<int> num(1001, 0);
//	int n, temp;
//	cin >> n;
//	while (n--)
//	{
//		cin >> temp;
//		num[temp]++;
//	}
//	vector<Node> res;
//	for (int i = 0; i < num.size(); i++)
//	{
//		if (num[i])
//			res.push_back(Node(i, num[i]));
//	}
//	sort(res.begin(), res.end());
//	for (int i = 0; i < res.size(); i++)
//		printf("%d %d\n", res[i].val, res[i].cnt);
//	return 0;
//}