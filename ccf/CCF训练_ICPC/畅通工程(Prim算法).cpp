//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//struct ArcNode {//��
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
//struct AdjNode {//�ڽӱ߽ڵ�
//	int adj_vex;
//	int info;
//	AdjNode(int v, int w) :adj_vex(v), info(w) {};
//};
//	//���룺�ڽӱ��ʾ������ͼG(�����1��ʼ���)��������vex_num
//	//��������ͼG����С������
//int Prim(vector<vector<AdjNode>> &G, int vex_num) {
//	vector<int> visited(vex_num + 1, 0);//��Ϊ���ʹ��Ķ���
//	priority_queue<ArcNode, vector<ArcNode>, cmp> q;
//	int i;
//	for (i = 0; i < G[1].size(); i++) {//��һ��������ڽӵ����
//		q.push(ArcNode(1, G[1][i].adj_vex, G[1][i].info));
//	}
//	visited[1] = true;
//	//vector<ArcNode> ans;//��С�������ı�
//	int num = 0;//����
//	int sum = 0;//Ȩֵ��
//	while (!q.empty())
//	{
//		ArcNode top;
//		top = q.top(); q.pop();
//		if (visited[top.b])
//			continue;
//		for (int i = 0; i < G[top.b].size(); i++) {//top.bδ�����ʵ��ڽӵ����
//			if (!visited[G[top.b][i].adj_vex])
//				q.push(ArcNode(top.b, G[top.b][i].adj_vex, G[top.b][i].info));
//		}
//		visited[top.b] = true;
//		//ans.push_back(top);//�����С�������ı�
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
