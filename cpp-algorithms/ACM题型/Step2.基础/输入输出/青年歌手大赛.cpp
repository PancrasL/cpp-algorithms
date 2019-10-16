#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
    int n;
    while (cin >> n) {
        int minGrade = INT_MAX;
        int maxGrade = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if (temp < minGrade) {
                minGrade = temp;
            }
            if (temp > maxGrade) {
                maxGrade = temp;
            }
            sum += temp;
        }
        printf("%.2f\n", (double)(sum - minGrade - maxGrade) / (n - 2));
    }
    return 0;
}