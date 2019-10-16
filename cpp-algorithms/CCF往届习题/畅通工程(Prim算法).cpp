//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//struct ArcNode {//边
//	int a;
//	int b;
//	int info;
//	ArcNode(int a, int b, int info) :a(a), b(b), info(info) {};
//	ArcNode() {};
//};
//struct cmp {
//	bool operator()(ArcNode &a, ArcNode &b) {
//		return a.info > b.info;
//	}
//};
//bool cmp_info(ArcNode &a, ArcNode &b)
//{
//	return a.info < b.info;
//}
//struct AdjNode {//邻接边节点
//	int adj_vex;
//	int info;
//	AdjNode(int v, int w) :adj_vex(v), info(w) {};
//};
//	//输入：邻接表表示的无向图G(顶点从1开始编号)，顶点数vex_num
//	//操作：求图G的最小生成树
//int Prim(vector<vector<AdjNode>> &G, int vex_num) {
//	vector<int> visited(vex_num + 1, 0);//标为访问过的顶点
//	priority_queue<ArcNode, vector<ArcNode>, cmp> q;
//	int i;
//	for (i = 0; i < G[1].size(); i++) {//第一个顶点的邻接点入队
//		q.push(ArcNode(1, G[1][i].adj_vex, G[1][i].info));
//	}
//	visited[1] = true;
//	//vector<ArcNode> ans;//最小生成树的边
//	int num = 0;//边数
//	int sum = 0;//权值和
//	while (!q.empty())
//	{
//		ArcNode top;
//		top = q.top(); q.pop();
//		if (visited[top.b])
//			continue;
//		for (int i = 0; i < G[top.b].size(); i++) {//top.b未被访问的邻接点入队
//			if (!visited[G[top.b][i].adj_vex])
//				q.push(ArcNode(top.b, G[top.b][i].adj_vex, G[top.b][i].info));
//		}
//		visited[top.b] = true;
//		//ans.push_back(top);//添加最小生成树的边
//		num++;
//		sum += top.info;
//		if (num == vex_num - 1) break;
//		//if (ans.size() == vex_num - 1) break;
//	}
//	if (num == vex_num - 1) return sum;
//	else return -1;
//	//if (ans.size() != vex_num - 1) ans.clear();
//}
//
//int main(void)
//{
//	int VexNum, EdgeNum;
//	while (true)
//	{
//		cin >> EdgeNum >> VexNum;
//		if (EdgeNum == 0) break;
//		vector<vector<AdjNode>> G(VexNum + 1);
//		int u, v, w;
//		while (EdgeNum--)
//		{
//			scanf("%d %d %d", &u, &v, &w);
//			G[u].push_back(AdjNode(v, w));
//			G[v].push_back(AdjNode(u, w));
//		}
//		int sum = Prim(G, VexNum);
//		if (sum < 0) cout << "?" << endl;
//		else cout << sum << endl;
//	}
//}
