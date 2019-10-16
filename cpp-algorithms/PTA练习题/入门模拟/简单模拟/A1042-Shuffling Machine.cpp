//洗牌模拟，注意初始化牌时的花色和编号的对应关系
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
string my_to_string(int i)
{
    char buf[32];
    sprintf(buf, "%d", i);
    return buf;
}
int main(void)
{
    int K;
    cin >> K;

    //读取洗牌顺序
    vector<int> order;
    int num;
    while (cin >> num) {
        order.push_back(num);
    }
    //初始化牌
    vector<string> card;
    for (int i = 1; i <= 13; i++) {
        card.push_back("S" + my_to_string(i));
    }
    for (int i = 1; i <= 13; i++) {
        card.push_back("H" + my_to_string(i));
    }
    for (int i = 1; i <= 13; i++) {
        card.push_back("C" + my_to_string(i));
    }
    for (int i = 1; i <= 13; i++) {
        card.push_back("D" + my_to_string(i));
    }
    for (int i = 1; i <= 2; i++) {
        card.push_back("J" + my_to_string(i));
    }
    //开始洗牌
    while (K--) {
        vector<string> newCard(card.size());
        for (int i = 0; i < order.size(); i++) {
            newCard[order[i] - 1] = card[i];
        }
        card.swap(newCard);
    }

    //输出结果
    cout << card[0];
    for (int i = 1; i < card.size(); i++) {
        cout << ' ' << card[i];
    }
    cout << endl;

    return 0;
}