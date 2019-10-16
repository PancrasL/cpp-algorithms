//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//struct Node
//{
//	long long x, y;//坐标+可额外安放的路由器数目
//	Node() {};
//	Node(long long x1, long long y1) :x(x1), y(y1) {};
//};
//struct Router
//{
//	int id;//路由器编号
//	int k;//还可安放的额外路由器编号
//	int deep;//BFS的深度
//	Router() {};
//	Router(int id1, int k1, int deep1) :id(id1), k(k1), deep(deep1) {};
//};
//int visited[201][101];//visited[i]表示到达到达第i个路由器时还可以安放visited[i]个额外路由器
//int n, m, k;
//unsigned long long r;
//bool isOK(Node &a, Node &b)
//{
//	if ((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y) <= r*r)
//	{
//		return true;
//	}
//	return false;
//}
//int main(void)
//{
//	cin >> n >> m >> k >> r;
//	vector<Node> v(n + m + 1);//n个路由器+m个可安放路由器的位置
//	for (int i = 1; i < m + n + 1; i++)
//	{
//		cin >> v[i].x >> v[i].y;
//	}
//	queue<Router> q;
//	q.push(Router(1, k, 0));
//	int ans = 0;
//	while (!q.empty())
//	{
//		Router front = q.front(); q.pop();
//		if (front.id==2)//到达第二个路由器
//		{
//			ans = front.deep; break;
//		}
//		int Max = (front.k == 0 ? n : m + n);
//		for (int i = 1; i <= Max; i++)
//		{
//			if (i <= n)//不使用额外的路由器
//			{
//				if (!visited[i][front.k] &&isOK(v[front.id], v[i]))//当前路由器可以到达第i个路由器
//				{
//					visited[i][front.k] = 1;
//					q.push(Router(i, front.k, front.deep + 1));
//				}
//			}
//			else//使用额外的路由器
//			{
//				if (!visited[i][front.k-1] && isOK(v[front.id], v[i]))//当前路由器可以到达第i个路由器
//				{
//					visited[i][front.k - 1] = 1;
//					q.push(Router(i, front.k - 1, front.deep + 1));
//				}
//			}
//		}
//	}
//	cout << ans - 1 << endl;
//}