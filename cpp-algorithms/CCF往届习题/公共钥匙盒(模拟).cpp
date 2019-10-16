//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct Node
//{
//	int type;//0：取钥匙，1：还钥匙
//	int time;//事件发生的事件
//	int id;//钥匙的编号
//	Node() {};
//	Node(int type1, int time1, int id1) :type(type1), time(time1), id(id1) {};
//	bool operator<(const Node &node)
//	{
//		if (time == node.time)
//		{
//			if (type == node.type)
//			{
//				return id < node.id;//若同为还钥匙或同为取钥匙，则编号小的先操作
//			}
//			return type > node.type;//若发生时间相同，则还钥匙在前
//		}
//		return time < node.time;//先发生的事件在前
//	}
//};
//int N, K;
//int main(void)
//{
//	cin >> N >> K;
//	vector<int> box(N + 1);//钥匙盒，-1表示该钥匙盒为空
//	vector<Node> Event;//事件列表
//	for (int i = 1; i <= N; i++)
//		box[i] = i;
//	for (int i = 0; i < K; i++)
//	{
//		int w, s, c;
//		cin >> w >> s >> c;
//		Event.push_back(Node(0, s, w));//在时刻s使用钥匙w
//		Event.push_back(Node(1, s + c, w));//在时刻s+c还钥匙w
//	}
//	sort(Event.begin(), Event.end());
//	//for (int i = 0; i < Event.size(); i++)
//	//{
//	//	cout << Event[i].type << ' ' << Event[i].time << ' ' << Event[i].id << endl;
//	//}
//	for (int i = 0; i < Event.size(); i++)
//	{
//		if (Event[i].type == 0)//取钥匙
//		{
//			int pos = 1;
//			for (pos = 1; pos <= N; pos++)//寻找钥匙所在位置
//				if (box[pos] == Event[i].id) break;
//			box[pos] = -1;//该位置置空
//		}
//		else//还钥匙
//		{
//			int pos = 1;
//			for (pos = 1; pos <= N; pos++)//寻找空钥匙位
//				if (box[pos] == -1) break;
//			box[pos] = Event[i].id;
//		}
//	}
//	for (int i = 1; i <= N; i++)
//		cout << box[i] << ' ';
//	return 0;
//}