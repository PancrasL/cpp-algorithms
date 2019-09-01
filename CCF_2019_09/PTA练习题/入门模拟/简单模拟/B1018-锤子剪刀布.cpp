#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    int a1, a2, a3; //甲的石头、剪刀、布的获胜次数
    int b1, b2, b3; //乙的石头、剪刀、布的获胜次数
    int win, lose, equ; //甲的胜、败、平次数
    win = lose = equ = 0;
    a1 = a2 = a3 = b1 = b2 = b3 = 0;
    cin>>N;
    for (int i = 0; i < N; i++) {
        char c1, c2;
        cin >> c1 >> c2;
        switch (c1) {
        case 'C':
            if (c2 == 'C') {
                equ++;
            } else if (c2 == 'J') {
                win++;
                a1++;
            } else {
                lose++;
                b3++;
            }
            break;
        case 'J':
            if (c2 == 'C') {
                lose++;
                b1++;
            } else if (c2 == 'J') {
                equ++;
            } else {
                win++;
                a2++;
            }
            break;
        case 'B':
            if (c2 == 'C') {
                win++;
                a3++;
            } else if (c2 == 'J') {
                lose++;
                b2++;
            } else {
                equ++;
            }
            break;
        default:
            break;
        }
    }

    cout << win << ' ' << equ << ' ' << lose << endl;
    cout << lose << ' ' << equ << ' ' << win << endl;
    char ans1, ans2;
    if (a1 >= a2) {
        if (a1 > a3) {
            ans1 = 'C';
        } else {
            ans1 = 'B';
        }
    } else {
        if (a2 > a3) {
            ans1 = 'J';
        } else
            ans1 = 'B';
    }

    if (b1 >= b2) {
        if (b1 > b3) {
            ans2 = 'C';
        } else {
            ans2 = 'B';
        }
    } else {
        if (b2 > b3) {
            ans2 = 'J';
        } else
            ans2 = 'B';
    }

    cout << ans1 << ' ' << ans2 << endl;

    return 0;
}