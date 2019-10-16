//#include<iostream>
//#include<memory>
//#include<vector>
//#include<queue>
//#include<stack>
//#include<stdio.h>
//using namespace std;
//struct Node
//{
//	int x;
//	int y;
//	Node(int x1 = -1, int y1 = -1) :x(x1), y(y1) {};
//};
//int matrix[5][5];//保存迷宫
//bool BFS(int row, int col, vector<vector<Node>> &pri)
//{
//	queue<Node> q;
//	q.push(Node(row, col));
//	while (!q.empty())
//	{
//		row = q.front().x; col = q.front().y;
//		q.pop();;
//		if (row + 1 < 5 && !matrix[row + 1][col])//向下
//		{
//			matrix[row + 1][col] = 1;
//			pri[row + 1][col] = Node(row, col);
//			q.push(Node(row + 1, col));
//		}
//		if (row - 1 >= 0 && !matrix[row - 1][col])//向上
//		{
//			matrix[row - 1][col] = 1;
//			pri[row - 1][col] = Node(row, col);
//			q.push(Node(row - 1, col));
//		}
//		if (col - 1 >= 0 && !matrix[row][col - 1])//向左
//		{
//			matrix[row][col - 1] = 1;
//			pri[row][col - 1] = Node(row, col);
//			q.push(Node(row, col - 1));
//		}
//		if (col + 1 < 5 && !matrix[row][col + 1])//向右
//		{
//			matrix[row][col + 1] = 1;
//			pri[row][col + 1] = Node(row, col);
//			q.push(Node(row, col + 1));
//		}
//	}
//	if (!matrix[4][4])
//		return false;
//	return true;
//}
//int main(void)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			cin >> matrix[i][j];
//	}
//	vector<vector<Node>> pri(5);
//	for (int i = 0; i < 5; i++)
//		pri[i].assign(5, Node(-1, -1));
//	if (BFS(0, 0, pri))
//	{
//		int i = 4, j = 4;
//		stack<Node> s;
//		s.push(Node(4, 4));
//		while (true)
//		{
//			Node temp = pri[i][j];
//			s.push(temp);
//			i = temp.x;
//			j = temp.y;
//			if (i == 0 && j == 0) break;
//		}
//		while (!s.empty())
//		{
//			printf("(%d, %d)\n", s.top().x, s.top().y);
//			s.pop();
//		}
//	}
//	return 0;
//}