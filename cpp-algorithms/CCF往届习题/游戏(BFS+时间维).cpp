//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//struct Node {
//	int row, col, time;
//	Node() {};
//	Node(int row1, int col1, int time1) :row(row1), col(col1), time(time1) {};
//};
//int n, m, t;
//bool visited[104][104][304];//visited[i][j][t]��ʾ��ʱ��t��i�е�j���Ƿ񱻷��ʣ�������Σ�յ�)������������ڵ�ʱ����300
//int BFS(int beginRow,int beginCol,int endRow,int endCol)
//{
//	queue<Node> q;
//	q.push(Node(beginRow, beginCol, 0));
//	visited[beginRow][beginCol][0] = true;
//	while (!q.empty())
//	{
//		Node front = q.front(); q.pop();
//		if (front.row == endRow && front.col == endCol) return front.time;
//		//��
//		if (front.row - 1 >= 1 && !visited[front.row - 1][front.col][front.time + 1])
//		{
//			visited[front.row - 1][front.col][front.time + 1] = true;
//			q.push(Node(front.row - 1, front.col, front.time + 1));
//		}
//		//��
//		if (front.row + 1 <= n && !visited[front.row + 1][front.col][front.time + 1])
//		{
//			visited[front.row + 1][front.col][front.time + 1] = true;
//			q.push(Node(front.row + 1, front.col, front.time + 1));
//		}
//		//��
//		if (front.col - 1 >= 1 && !visited[front.row][front.col - 1][front.time + 1])
//		{
//			visited[front.row][front.col - 1][front.time + 1] = true;
//			q.push(Node(front.row, front.col - 1, front.time + 1));
//		}
//		//��
//		if (front.col + 1 <= m && !visited[front.row][front.col + 1][front.time + 1])
//		{
//			visited[front.row][front.col + 1][front.time + 1] = true;
//			q.push(Node(front.row, front.col + 1, front.time + 1));
//		}
//	}
//}
//int main(void)
//{
//	cin >> n >> m >> t;
//	for (int i = 0; i < t; i++)
//	{
//		int r, c, a, b;
//		cin >> r >> c >> a >> b;
//		for (int j = a; j <= b; j++)//����Σ������
//			visited[r][c][j] = true;
//	}
//	cout << BFS(1, 1, n, m) << endl;
//	return 0;
//}