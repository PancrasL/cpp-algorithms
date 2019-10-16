#include <iostream>
#include <set>
#include <stdio.h>
#include <vector>
using namespace std;
struct Node {
    int data;
    int next;
} list[100001];
set<int> s;
vector<int> deletedNode;
int deleteNode(int p)
{
    deletedNode.push_back(list[p].next);
    list[p].next = list[list[p].next].next;
}
void printList(int head)
{
    int p = head;
    while (p != -1) {
        if (list[p].next != -1)
            printf("%05d %d %05d\n", p, list[p].data, list[p].next);
        else
            printf("%05d %d -1\n", p, list[p].data);
        p = list[p].next;
    }
}
int main(void)
{
    //读取输入
    int head, N;
    cin >> head >> N;
    for (int i = 0; i < N; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        list[a].data = b;
        list[a].next = c;
    }

    //删除冗余节点
    int p = head;
    while (p != -1) {
        s.insert(list[p].data);
        s.insert(-list[p].data);
        int pNext = list[p].next;
        if (pNext == -1)
            break;

        //删除下一个节点的冗余节点
        if (s.count(list[pNext].data) == 1) {
            deleteNode(p);
        } else
            p = list[p].next;
    }

    printList(head);

    int len = deletedNode.size();
    if (len) {
        for (int i = 0; i < len - 1; i++) {
            printf("%05d %d %05d\n", deletedNode[i], list[deletedNode[i]].data, deletedNode[i + 1]);
        }
        printf("%05d %d -1\n", deletedNode[len - 1], list[deletedNode[len - 1]].data);
    }
}