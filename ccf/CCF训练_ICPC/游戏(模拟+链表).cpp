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
//	/*��ʼ������*/
//	for (int i = 1; i <= n; i++)
//	{
//		p->next = new Node(i);
//		p = p->next;
//	}
//	p->next = head->next;
//	head = head->next;
//
//	/*ģ����Ϸ*/
//	Node *plast = p; p = p->next;//pָ���һ��ѧ����plastָ����һ��ѧ��
//	int cnt = 0;//����
//	while (true)
//	{
//		cnt++;
//		if ((cnt % 10 == k) || (cnt % k == 0))//ɾ�����p
//		{
//			plast->next = p->next; p = p->next;
//			if (p == plast) break;//ֻʣ��һ��ѧ��������ѭ��
//		}
//		else //����ƶ�һ��
//		{
//			p = p->next; plast = plast->next;
//		}
//	}
//	cout << p->id << endl;
//	return 0;
//}