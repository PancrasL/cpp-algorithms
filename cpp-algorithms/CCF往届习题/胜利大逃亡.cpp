//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//struct Node {
//	int x;
//	int y;
//	int z;
//	int t;
//	Node(int x1, int y1, int z1, int t1) :x(x1), y(y1), z(z1), t(t1) {};
//	Node() {};
//};
//int matrix[51][51][51];
//int A, B, C, T;
//int BFS(int x, int y, int z, int endx, int endy, int endz)
//{
//	queue<Node> q;
//	q.push(Node(x, y, z, 0));
//	matrix[x][y][z] = 1;
//	bool escape = false;
//	while (!q.empty())
//	{
//		Node front = q.front(); q.pop();
//		if (front.x == endx && front.y == endy && front.z == endz)//�������
//			return front.t;
//		while (front.t == T)//ţħ��������
//		{
//			if (front.x == endx && front.y == endy && front.z == endz)//�Ѿ��������
//				return T;
//			if (q.empty()) return -1;//δ������ڣ�����ʧ��
//			front = q.front();
//			q.pop();
//		}
//		//��
//		if (front.y - 1 >= 0 && !matrix[front.x][front.y - 1][front.z])
//		{
//			matrix[front.x][front.y - 1][front.z] = 1;
//			q.push(Node(front.x, front.y - 1, front.z, front.t + 1));
//		}
//		//��
//		if (front.y + 1 < B && !matrix[front.x][front.y + 1][front.z])
//		{
//			matrix[front.x][front.y + 1][front.z] = 1;
//			q.push(Node(front.x, front.y + 1, front.z, front.t + 1));
//		}
//		//��
//		if (front.z - 1 >= 0 && !matrix[front.x][front.y][front.z - 1])
//		{
//			matrix[front.x][front.y][front.z-1] = 1;
//			q.push(Node(front.x, front.y, front.z - 1, front.t + 1));
//		}
//		//��
//		if (front.z + 1 < C && !matrix[front.x][front.y][front.z + 1])
//		{
//			matrix[front.x][front.y][front.z + 1] = 1;
//			q.push(Node(front.x, front.y, front.z + 1, front.t + 1));
//		}
//		//ǰ
//		if (front.x + 1 < A && !matrix[front.x + 1][front.y][front.z])
//		{
//			matrix[front.x + 1][front.y][front.z] = 1;
//			q.push(Node(front.x + 1, front.y, front.z, front.t + 1));
//		}
//		//��
//		if (front.x - 1 >= 0 && !matrix[front.x - 1][front.y][front.z])
//		{
//			matrix[front.x - 1][front.y][front.z] = 1;
//			q.push(Node(front.x - 1, front.y, front.z, front.t + 1));
//		}
//	}
//	return -1;//������ͨ·
//}
//int main(void)
//{
//	int K;
//	scanf("%d", &K);
//	while (K--)
//	{
//		scanf("%d %d %d %d", &A, &B, &C, &T);
//		for (int i = 0; i < A; i++)
//		{
//			for (int j = 0; j < B; j++)
//			{
//				for (int k = 0; k < C; k++)
//				{
//					scanf("%d", &matrix[i][j][k]);
//				}
//			}
//		}
//		int ans=BFS(0, 0, 0, A - 1, B - 1, C - 1);
//		if (ans >= 0)
//			cout << ans << endl;
//		else cout << -1 << endl;
//	}
//}