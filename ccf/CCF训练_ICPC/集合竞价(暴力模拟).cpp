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
//	bool valid;//记录是否有效
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
//	vector<Node> v(5001);//保存记录
//	string line;
//	double price; int num;
//	int index = 1;
//	/*读取记录*/
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
//	/*处理记录*/
//	vector<Record> R;//保存有效交易记录
//	set<double> s;//保存可能的开盘价
//	for (int i = 1; i <index; i++)
//	{
//		if (v[i].valid)
//		{
//			if (v[i].type == "buy")//有效的购买记录
//			{
//				R.push_back(Record(v[i].price, v[i].num, 0));
//				s.insert(v[i].price);
//			}
//			else if (v[i].type == "sell")//有效的售出记录
//			{
//				R.push_back(Record(v[i].price, v[i].num, 1));
//				s.insert(v[i].price);
//			}
//		}
//	}
//	/*计算开盘价*/
//	double ans = 0;//最高开盘价
//	long long max_num = 0;//成交数
//	double cur_ans;//当前开盘价
//	long long cur_num;//当前成交记录
//	set<double>::iterator it = s.begin();
//	while (it != s.end())
//	{
//		cur_ans = *it;
//		long long num1 = 0, num2 = 0;
//		for (int i = 0; i < R.size(); i++)
//		{
//			if (R[i].type == 0)//是买家
//			{
//				if (R[i].price >= cur_ans) num1 += R[i].num;
//			}
//			else//是卖家
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