//#include<iostream>
//#include<string>
//#include<vector>
//#include<stdio.h>
//#include<set>
//#include<algorithm>
//using namespace std;
//struct Node
//{
//	string type;
//	double price;
//	int num;
//	bool valid;//��¼�Ƿ���Ч
//	Node() { valid = true; };
//};
//struct Record
//{
//	double price;
//	int num;
//	bool type;
//	Record() {};
//	Record(double price1, int num1, bool type1) :price(price1), num(num1), type(type1) {};
//};
//int main(void)
//{
//	vector<Node> v(5001);//�����¼
//	string line;
//	double price; int num;
//	int index = 1;
//	/*��ȡ��¼*/
//	while (cin>>line)
//	{
//		if (line == "buy")
//		{
//			cin >> v[index].price >> v[index].num;
//			v[index].type = "buy";
//		}
//		else if (line == "sell")
//		{
//			cin >> v[index].price >> v[index].num;
//			v[index].type = "sell";
//		}
//		else
//		{
//			cin >> v[index].num;
//			v[index].type = "cancel";
//			v[v[index].num].valid = false;
//		}
//		index++;
//	}
//	/*�����¼*/
//	vector<Record> R;//������Ч���׼�¼
//	set<double> s;//������ܵĿ��̼�
//	for (int i = 1; i <index; i++)
//	{
//		if (v[i].valid)
//		{
//			if (v[i].type == "buy")//��Ч�Ĺ����¼
//			{
//				R.push_back(Record(v[i].price, v[i].num, 0));
//				s.insert(v[i].price);
//			}
//			else if (v[i].type == "sell")//��Ч���۳���¼
//			{
//				R.push_back(Record(v[i].price, v[i].num, 1));
//				s.insert(v[i].price);
//			}
//		}
//	}
//	/*���㿪�̼�*/
//	double ans = 0;//��߿��̼�
//	long long max_num = 0;//�ɽ���
//	double cur_ans;//��ǰ���̼�
//	long long cur_num;//��ǰ�ɽ���¼
//	set<double>::iterator it = s.begin();
//	while (it != s.end())
//	{
//		cur_ans = *it;
//		long long num1 = 0, num2 = 0;
//		for (int i = 0; i < R.size(); i++)
//		{
//			if (R[i].type == 0)//�����
//			{
//				if (R[i].price >= cur_ans) num1 += R[i].num;
//			}
//			else//������
//			{
//				if (R[i].price <= cur_ans) num2 += R[i].num;
//			}
//		}
//		cur_num = min(num1, num2);
//		if (cur_num >= max_num)
//		{
//			ans = cur_ans;
//			max_num = cur_num;
//		}
//		it++;
//	}
//	printf("%.2lf %lld", ans, max_num);
//	return 0;
//}