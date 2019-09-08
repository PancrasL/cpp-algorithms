#include <algorithm>
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
struct YueBing {
    double remain; //库存量：万吨
    double price; //价格：亿元/万吨
    bool operator<(YueBing& a)
    {
        return price > a.price;
    }
};

int main(void)
{
    int N;
    double D;
    cin >> N >> D;
    vector<YueBing> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i].remain;
    }

    for (int i = 0; i < N; i++) {
        double total;
        cin >> total;
        vec[i].price = total / vec[i].remain;
    }
    sort(vec.begin(), vec.end());
    double profit = 0;
    for (int i = 0; i < N; i++) {
        if (D > vec[i].remain) {
            D -= vec[i].remain;
            profit += vec[i].remain * vec[i].price;
        } else {
            profit += D * vec[i].price;
            break;
        }
    }

    printf("%.2f\n", profit);

    return 0;
}