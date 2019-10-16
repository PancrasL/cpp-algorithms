//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<queue>
//using namespace std;
//struct Node
//{
//	int x;
//	int y;
//	int num;
//	Node(int x1, int y1, int n1) :x(x1), y(y1), num(n1) {};
//	Node() {};
//};
//int n, m, k, d;
//int matrix[1001][1001];
//int visited[1001][1001];
//int main(void)
//{
//	queue<Node> q;
//	cin >> n >> m >> k >> d;//方格图大小、分店数量、客户数量、障碍数量
//	vector<Node> v;
//	for (int i = 0; i < m; i++)//录入分店
//	{
//		int x, y;
//		scanf("%d %d", &x, &y);
//		q.push(Node(x, y, 0));
//		visited[x][y] = 1;
//	}
//	for (int i = 0; i < k; i++)//录入客户
//	{
//		int x, y, n;
//		scanf("%d %d %d", &x, &y, &n);
//		v.push_back(Node(x, y, n));
//	}
//	for (int i = 0; i < d; i++)//录入障碍
//	{
//		int x, y;
//		scanf("%d %d", &x, &y);
//		visited[x][y] = 1;
//	}
//	while (!q.empty())
//	{
//		Node front = q.front(); q.pop();
//		if (front.x - 1 >= 1 && !visited[front.x - 1][front.y])//上
//		{
//			visited[front.x - 1][front.y] = 1;
//			matrix[front.x - 1][front.y] = front.num + 1;
//			q.push(Node(front.x - 1, front.y, front.num + 1));
//		}
//		if (front.x + 1 <= n && !visited[front.x + 1][front.y])//下
//		{
//			visited[front.x + 1][front.y] = 1;
//			matrix[front.x + 1][front.y] = front.num + 1;
//			q.push(Node(front.x + 1, front.y, front.num + 1));
//		}
//		if (front.y - 1 >= 1 && !visited[front.x][front.y - 1])//左
//		{
//			visited[front.x][front.y - 1] = 1;
//			matrix[front.x][front.y - 1] = front.num + 1;
//			q.push(Node(front.x, front.y - 1, front.num + 1));
//		}
//		if (front.y + 1 <= n && !visited[front.x][front.y + 1])//右
//		{
//			visited[front.x][front.y + 1] = 1;
//			matrix[front.x][front.y + 1] = front.num + 1;
//			q.push(Node(front.x, front.y + 1, front.num + 1));
//		}
//	}
//	long long ans = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		ans = ans + matrix[v[i].x][v[i].y] * v[i].num;
//	}
//	cout << ans << endl;
//}