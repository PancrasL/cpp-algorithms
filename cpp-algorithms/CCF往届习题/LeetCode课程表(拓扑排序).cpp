//#include<vector>
//#include<queue>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//	vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
//		vector<int> inDegree(numCourses,0);//����������
//		vector<vector<int> >G(numCourses);//��������ͼ
//		vector<bool> visited(numCourses, 0);
//		queue<int> q;//	�������Ϊ0�Ľ��
//		for (int i = 0; i < prerequisites.size(); i++)
//		{
//			G[prerequisites[i].second].push_back(prerequisites[i].first);//��������ͼ
//			inDegree[prerequisites[i].first]++;
//		}
//		/*�����Ϊ0�Ľ�����*/
//		for (int i = 0; i < inDegree.size(); i++)
//		{
//			if (inDegree[i] == 0)
//				q.push(i);
//		}
//		
//		/*ִ����������*/
//		vector<int> ans;
//		while (!q.empty())
//		{
//			int front = q.front(); q.pop();
//			ans.push_back(front);
//			for (int i = 0; i < G[front].size(); i++)//ɾ����ý�������ı�(��Ч����õ���ڽӵ�����-1)
//			{
//				if (--inDegree[G[front][i]] == 0)//��ȼ�λ0�����
//					q.push(G[front][i]);
//			}
//		}
//		if (ans.size() != numCourses)//��������ʧ��
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