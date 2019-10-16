#include <algorithm>
#include <iostream>
#include <stdio.h>
using namespace std;
struct Node {
    int addr;
    int data;
    int next;
    bool flag; //标记节点是否在链表中
    Node()
    {
        flag = false;
    }
} list[100001];
bool cmp(const Node& a, const Node& b)
{
    if (a.flag == false || b.flag == false) {
        return a.flag > b.flag;
    }
    return a.data < b.data;
}
int main(void)
{
    int N, head;
    cin >> N >> head;
    while (N--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        list[a].addr = a;
        list[a].data = b;
        list[a].next = c;
    }

    int p = head;
    int cnt = 0;
    while (p != -1) {
        cnt++;
        list[p].flag = true;
        p = list[p].next;
    }

    sort(list, list + 100001, cmp);

    if (cnt == 0) { //链表中没有节点
        printf("0 -1\n");
    } else {
        printf("%d %05d\n", cnt, list[0].addr);
    }
    for (int i = 0; i < cnt; i++) {
        if (i != cnt - 1)
            printf("%05d %d %05d\n", list[i].addr, list[i].data, list[i + 1].addr);
        else
            printf("%05d %d -1\n", list[i].addr, list[i].data);
    }

    return 0;
}