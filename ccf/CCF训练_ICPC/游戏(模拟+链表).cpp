//#include<iostream>
//#include<vector>
//using namespace std;
//struct Node
//{
//	int id;
//	Node *next;
//	Node(int id1) :id(id1), next(NULL) {};
//};
//int main(void)
//{
//	int n, k;
//	cin >> n >> k;
//	Node *head, *p;
//	head = new Node(-1);
//	p = head;
//	/*初始化队伍*/
//	for (int i = 1; i <= n; i++)
//	{
//		p->next = new Node(i);
//		p = p->next;
//	}
//	p->next = head->next;
//	head = head->next;
//
//	/*模拟游戏*/
//	Node *plast = p; p = p->next;//p指向第一个学生，plast指向上一个学生
//	int cnt = 0;//计数
//	while (true)
//	{
//		cnt++;
//		if ((cnt % 10 == k) || (cnt % k == 0))//删除结点p
//		{
//			plast->next = p->next; p = p->next;
//			if (p == plast) break;//只剩下一个学生，跳出循环
//		}
//		else //向后移动一次
//		{
//			p = p->next; plast = plast->next;
//		}
//	}
//	cout << p->id << endl;
//	return 0;
//}