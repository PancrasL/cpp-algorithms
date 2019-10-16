//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<stdio.h>
//#include<memory.h>
///*同一层称上下左右，不同层称前后*/
//using namespace std;
//struct Node {
//	int x, y, z, t;
//	Node(int x1 = 0, int y1 = 0, int z1 = 0, int t1 = 0) :x(x1), y(y1), z(z1), t(t1) {};
//};
//int N, M, T;
//char matrix[2][11][11];
//char visited[2][11][11];
//bool isOK(int x, int y, int z)
//{
//	if (!visited[x][y][z] && matrix[x][y][z] != '*' )
//		return true;
//	return false;
//}
//int BFS(int x, int y, int z,int endx,int endy,int endz)
//{
//	queue<Node> q;
//
//	q.push(Node(x, y, z, 0));
//	visited[x][y][z] = 1;//标记已访问
//	while (!q.empty())
//	{
//		Node front;
//		front = q.front();
//		q.pop();
//		if (front.x == endx && front.y == endy && front.z == endz)//找到公主
//			return true;
//		/*在时光机的位置, 进行传送*/
//		if (matrix[front.x][front.y][front.z] == '#')
//		{
//			if (matrix[!front.x][front.y][front.z] == '.')//可以传送
//			{
//				q.push(Node(!front.x, front.y, front.z, front.t));
//				visited[!front.x][front.y][front.z] = 1;
//			}
//		}
//		else {//不在时光机上
//			//上
//			if (front.y - 1 >= 0 && isOK(front.x, front.y - 1, front.z) && front.t + 1 <= T)
//			{
//				q.push(Node(front.x, front.y - 1, front.z, front.t + 1));
//				visited[front.x][front.y - 1][front.z] = 1;
//			}
//			//下
//			if (front.y + 1 < N && isOK(front.x, front.y + 1, front.z) && front.t + 1 <= T)
//			{
//				q.push(Node(front.x, front.y + 1, front.z, front.t + 1));
//				visited[front.x][front.y + 1][front.z] = 1;
//			}
//			//左
//			if (front.z - 1 >= 0 && isOK(front.x, front.y, front.z - 1) && front.t + 1 <= T)
//			{
//				q.push(Node(front.x, front.y, front.z - 1, front.t + 1));
//				visited[front.x][front.y][front.z - 1] = 1;
//			}
//			//右
//			if (front.z + 1 < M && isOK(front.x, front.y, front.z + 1) && front.t + 1 <= T)
//			{
//				q.push(Node(front.x, front.y, front.z + 1, front.t + 1));
//				visited[front.x][front.y][front.z + 1] = 1;
//			}
//		}
//	}
//	return false;
//}
//int main(void)
//{
//	int C;
//	cin >> C;
//	while (C--)
//	{
//		scanf("%d %d %d", &N, &M, &T);
//		int endx, endy, endz;
//		for (int i = 0; i < 2; i++)
//			for (int j = 0; j < N; j++)
//				for (int k = 0; k < M; k++)
//				{
//					scanf(" %c", &matrix[i][j][k]);
//					if (matrix[i][j][k] == 'P')
//					{
//						endx = i;
//						endy = j;
//						endz = k;
//						matrix[i][j][k] = '.';
//					}
//				}
//		memset(visited, 0, sizeof(visited));
//		if (BFS(0, 0, 0, endx, endy, endz)) cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	//system("pause");
//}