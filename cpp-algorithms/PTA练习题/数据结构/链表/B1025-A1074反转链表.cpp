#include <iostream>
#include <stdio.h>
using namespace std;
struct Node {
    int data;
    int next;
} list[100001];

//反转从head开始，连续lenth个节点的链表，返回该段链表的尾节点
int* reverseList(int head, int lenth, int* headPre)
{
    if (lenth <= 1)
        return &(list[head].next);
    int cur = head;
    int next = list[cur].next;
    int cnt = 1;
    while (true) {
        int nextNext = list[next].next; //cur→next→nextNext
        list[next].next = cur;

        cur = next;
        next = nextNext;
        if (++cnt == lenth) {
            break;
        }
    }

    *headPre = cur;
    list[head].next = next;

    return &(list[head].next);
}

int listLenth(int head){
    int p = head;
    int len = 0;
    while(p!=-1){
        len++;
        p = list[p].next;
    }

    return len;
}
int main(void)
{
    int head, N, K; //头节点、节点总数、每K个节点进行翻转
    cin >> head >> N >> K;

    //读取静态链表
    for (int i = 0; i < N; i++) {
        int addr, data, next;
        scanf("%d %d %d", &addr, &data, &next);
        list[addr].data = data;
        list[addr].next = next;
    }

    //计算需要反转的组数
    N = listLenth(head);
    int group = N / K;

    //反转链表
    int* begin = &head;
    for (int i = 0; i < group; i++) {
        begin = reverseList(*begin, K, begin);
    }

    //输出链表
    int node = head;
    while (node != -1) {
        printf("%05d %d ", node, list[node].data);
        if (list[node].next == -1)
            printf("-1\n");
        else
            printf("%05d\n", list[node].next);

        node = list[node].next;
    }

    return 0;
}