#include <iostream>
#include <stdio.h>
using namespace std;
struct Node {
    char data;
    int next;
} list[100001];

int listLenth(int head)
{
    int len = 0;
    while (head != -1) {
        len++;
        head = list[head].next;
    }
    return len;
}

int main(void)
{
    int addr1, addr2;
    int N;
    cin >> addr1 >> addr2 >> N;
    //读取链表
    for (int i = 0; i < N; i++) {
        int a, c;
        char b;
        scanf("%d %c %d", &a, &b, &c);
        list[a].data = b;
        list[a].next = c;
    }

    int len1 = listLenth(addr1);
    int len2 = listLenth(addr2);

    //将两个链表化成一样长
    if (len1 < len2) {
        while (len1 < len2) {
            addr2 = list[addr2].next;
            len2--;
        }
    } else if (len1 > len2) {
        while (len1 > len2) {
            addr1 = list[addr1].next;
            len1--;
        }
    }
    bool isOK = false;

    while (addr1 != -1 && addr2 != -1 && !isOK) {
        if (addr1 == addr2)
            isOK = true;
        else {
            addr1 = list[addr1].next;
            addr2 = list[addr2].next;
        }
    }

    if (isOK)
        printf("%05d\n", addr1);
    else
        printf("-1\n");

    return 0;
}