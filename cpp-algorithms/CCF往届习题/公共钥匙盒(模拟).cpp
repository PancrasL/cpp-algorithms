//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Node
//{
//	int type;//0��ȡԿ�ף�1����Կ��
//	int time;//�¼��������¼�
//	int id;//Կ�׵ı��
//	Node() {};
//	Node(int type1, int time1, int id1) :type(type1), time(time1), id(id1) {};
//	bool operator<(const Node &node)
//	{
//		if (time == node.time)
//		{
//			if (type == node.type)
//			{
//				return id < node.id;//��ͬΪ��Կ�׻�ͬΪȡԿ�ף�����С���Ȳ���
//			}
//			return type > node.type;//������ʱ����ͬ����Կ����ǰ
//		}
//		return time < node.time;//�ȷ������¼���ǰ
//	}
//};
//int N, K;
//int main(void)
//{
//	cin >> N >> K;
//	vector<int> box(N + 1);//Կ�׺У�-1��ʾ��Կ�׺�Ϊ��
//	vector<Node> Event;//�¼��б�
//	for (int i = 1; i <= N; i++)
//		box[i] = i;
//	for (int i = 0; i < K; i++)
//	{
//		int w, s, c;
//		cin >> w >> s >> c;
//		Event.push_back(Node(0, s, w));//��ʱ��sʹ��Կ��w
//		Event.push_back(Node(1, s + c, w));//��ʱ��s+c��Կ��w
//	}
//	sort(Event.begin(), Event.end());
//	//for (int i = 0; i < Event.size(); i++)
//	//{
//	//	cout << Event[i].type << ' ' << Event[i].time << ' ' << Event[i].id << endl;
//	//}
//	for (int i = 0; i < Event.size(); i++)
//	{
//		if (Event[i].type == 0)//ȡԿ��
//		{
//			int pos = 1;
//			for (pos = 1; pos <= N; pos++)//Ѱ��Կ������λ��
//				if (box[pos] == Event[i].id) break;
//			box[pos] = -1;//��λ���ÿ�
//		}
//		else//��Կ��
//		{
//			int pos = 1;
//			for (pos = 1; pos <= N; pos++)//Ѱ�ҿ�Կ��λ
//				if (box[pos] == -1) break;
//			box[pos] = Event[i].id;
//		}
//	}
//	for (int i = 1; i <= N; i++)
//		cout << box[i] << ' ';
//	return 0;
//}