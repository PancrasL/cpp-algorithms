//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//struct Node
//{
//	long long x, y;//����+�ɶ��ⰲ�ŵ�·������Ŀ
//	Node() {};
//	Node(long long x1, long long y1) :x(x1), y(y1) {};
//};
//struct Router
//{
//	int id;//·�������
//	int k;//���ɰ��ŵĶ���·�������
//	int deep;//BFS�����
//	Router() {};
//	Router(int id1, int k1, int deep1) :id(id1), k(k1), deep(deep1) {};
//};
//int visited[201][101];//visited[i]��ʾ���ﵽ���i��·����ʱ�����԰���visited[i]������·����
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
//	vector<Node> v(n + m + 1);//n��·����+m���ɰ���·������λ��
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
//		if (front.id==2)//����ڶ���·����
//		{
//			ans = front.deep; break;
//		}
//		int Max = (front.k == 0 ? n : m + n);
//		for (int i = 1; i <= Max; i++)
//		{
//			if (i <= n)//��ʹ�ö����·����
//			{
//				if (!visited[i][front.k] &&isOK(v[front.id], v[i]))//��ǰ·�������Ե����i��·����
//				{
//					visited[i][front.k] = 1;
//					q.push(Router(i, front.k, front.deep + 1));
//				}
//			}
//			else//ʹ�ö����·����
//			{
//				if (!visited[i][front.k-1] && isOK(v[front.id], v[i]))//��ǰ·�������Ե����i��·����
//				{
//					visited[i][front.k - 1] = 1;
//					q.push(Router(i, front.k - 1, front.deep + 1));
//				}
//			}
//		}
//	}
//	cout << ans - 1 << endl;
//}