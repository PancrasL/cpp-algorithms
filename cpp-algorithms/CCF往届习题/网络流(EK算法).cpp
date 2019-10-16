////codevs 1993
//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
//const int INF = 0x7ffffff;
//
//int n, m;//n是节点数，m是边数，1是源点，n是汇点
//vector<int> pre(201, -1);//bfs时保存前驱结点
//vector<int> flow(201);//flow[i]表示源点到结点i的流量 
//int g[201][201], maxflow;
//
//int bfs(int s, int t)
//{
//	queue <int> q;
//	pre.assign(201, -1);//置空
//	pre[s] = 0;
//	q.push(s);
//	flow[s] = INF;//初始流量无穷大
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//		if (x == t) break;//到达汇点
//		for (int i = 1; i <= n; i++)
//			//EK一次只找一个增广路 
//			if (g[x][i] > 0 && pre[i] == -1)
//			{
//				pre[i] = x;
//				flow[i] = min(flow[x], g[x][i]);
//				q.push(i);
//			}
//	}
//	if (pre[t] == -1) return -1;//未找到到达汇点的路径
//	else return flow[t];
//}
//
////increase为增广的流量 
//void EK(int s, int t)
//{
//	int increase = 0;
//	while ((increase = bfs(s, t)) != -1)//bfs获取一条增广路径
//	{//迭代 
//		int k = t;
//		while (k != s)//从汇点回溯到源点
//		{
//			int last = pre[k];//从后往前找路径
//			g[last][k] -= increase;
//			g[k][last] += increase;
//			k = last;
//		}
//		maxflow += increase;
//	}
//}
//
//int main()
//{
//	cin >> m >> n;//边数，节点数
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;//(a,b)=c
//		g[a][b] += c;//此处不可直接输入，要+=，可能存在多重边
//	}
//	EK(1, n);
//	printf("%d", maxflow);
//	return 0;
//}