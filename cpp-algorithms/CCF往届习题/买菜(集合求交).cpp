//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Node
//{
//	int begin, end;
//};
//vector<Node> H;
//vector<Node> W;
//int intersection(Node node)
//{
//	int num = 0;
//	for (int i = 0; i < H.size(); i++)
//	{
//		if (H[i].begin > node.end) break;
//		if (H[i].end < node.begin) continue;
//		num = num + min(H[i].end, node.end) - max(H[i].begin, node.begin);
//	}
//	return num;
//}
//int main(void)
//{
//	int n;
//	cin >> n;
//	H.resize(n); W.resize(n);
//	for (int i = 0; i < n; i++)
//		cin >> H[i].begin >> H[i].end;
//	for (int i = 0; i < n; i++)
//		cin >> W[i].begin >> W[i].end;
//	long long ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		ans += intersection(W[i]);
//	}
//	cout << ans;
//	return 0;
//}