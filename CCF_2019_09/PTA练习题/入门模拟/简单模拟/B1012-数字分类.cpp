#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <vector>
using namespace std;
int main(void)
{
    int N;
    vector<int> A1, A2, A3, A4, A5;

    //数字分类
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        int key = num % 5;
        switch (key) {
        case 0:
            A1.push_back(num);
            break;
        case 1:
            A2.push_back(num);
            break;
        case 2:
            A3.push_back(num);
            break;
        case 3:
            A4.push_back(num);
            break;
        case 4:
            A5.push_back(num);
            break;
        default:
            break;
        }
    }

    //输出结果
    int sum;
    double fsum;
    int maxNum;
    //A1
    if (!A1.empty()) {
        bool flag = true;
        sum = 0;
        for (int i = 0; i < A1.size(); i++)
            if (A1[i] % 2 == 0) {
                flag = false;
                sum += A1[i];
            }
        if (flag)
            cout << "N";
        else
            cout << sum;
    } else {
        cout << "N";
    }

    //A2
    if (!A2.empty()) {
        sum = 0;
        for (int i = 0; i < A2.size(); i++) {
            if (i & 1)
                sum -= A2[i];
            else
                sum += A2[i];
        }
        cout << ' ' << sum;
    } else {
        cout << " N";
    }

    //A3
    if (!A3.empty()) {
        cout << ' ' << A3.size();
    } else {
        cout << " N";
    }

    //A4
    if (!A4.empty()) {
        fsum = 0;
        for (int i = 0; i < A4.size(); i++) {
            fsum += A4[i];
        }
        printf(" %.1f", fsum / A4.size());
    } else {
        cout << " N";
    }

    //A5
    if (!A5.empty()) {
        maxNum = INT_MIN;
        for (int i = 0; i < A5.size(); i++) {
            if (A5[i] > maxNum)
                maxNum = A5[i];
        }
        cout << ' ' << maxNum << endl;
    } else {
        cout << " N" << endl;
    }

    return 0;
}