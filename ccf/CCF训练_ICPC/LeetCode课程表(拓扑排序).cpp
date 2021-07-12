//#include<vector>
//#include<queue>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//	vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
//		vector<int> inDegree(numCourses,0);//保存结点的入度
//		vector<vector<int> >G(numCourses);//保存拓扑图
//		vector<bool> visited(numCourses, 0);
//		queue<int> q;//	保存入度为0的结点
//		for (int i = 0; i < prerequisites.size(); i++)
//		{
//			G[prerequisites[i].second].push_back(prerequisites[i].first);//创建拓扑图
//			inDegree[prerequisites[i].first]++;
//		}
//		/*将入度为0的结点入队*/
//		for (int i = 0; i < inDegree.size(); i++)
//		{
//			if (inDegree[i] == 0)
//				q.push(i);
//		}
//		
//		/*执行拓扑排序*/
//		vector<int> ans;
//		while (!q.empty())
//		{
//			int front = q.front(); q.pop();
//			ans.push_back(front);
//			for (int i = 0; i < G[front].size(); i++)//删除与该结点相连的边(等效于与该点的邻接点的入度-1)
//			{
//				if (--inDegree[G[front][i]] == 0)//入度减位0则入队
//					q.push(G[front][i]);
//			}
//		}
//		if (ans.size() != numCourses)//拓扑排序失败
//			ans.clear();
//		return ans;
//	}
//};
//int main(void)
//{
//	Solution s;
//	int n, m;
//	vector<pair<int, int>> v;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		v.push_back(pair<int, int>(a, b));
//	}
//	s.findOrder(n, v);
//}