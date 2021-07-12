//#include<iostream>
//#include<vector>
//#include<string>
//#include<stdio.h>
//using namespace std;
//struct Node {
//	string name;
//	int id;
//	Node *next;
//	Node() :next(NULL) {};
//};
//int main(void)
//{
//	int N;
//	Node *Lhead = new Node();
//	Node *p;
//	p = Lhead;
//	string name;
//	cin >> N;
//	for (int i = 1; i <= N; i++)
//	{
//		p->next = new Node();
//		p = p->next;
//		cin >> p->name;
//		p->id = i;
//	}
//	Node *last;
//	Lhead = Lhead->next;
//	last = p;
//	p->next = Lhead;
//	p = Lhead;
//	int W, S;
//	scanf("%d,%d", &W, &S);
//	while (p->id != W)
//	{
//		last = p;
//		p = p->next;
//	}
//	vector<string> ans;
//	while (true)
//	{
//		int i = 0;
//		while(true)
//		{
//			i++;
//			if (i == S) break;
//			last = p;
//			p = p->next;
//		}
//		ans.push_back(p->name);
//		last->next = p->next;
//		p = p->next;
//		if (last == p)
//		{
//			ans.push_back(p->name);
//			break;
//		}
//	}
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i] << endl;
//}