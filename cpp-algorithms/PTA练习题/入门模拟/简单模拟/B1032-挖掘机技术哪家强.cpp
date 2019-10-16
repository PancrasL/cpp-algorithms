#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main(void)
{
    int N;
    vector<int> score(100010);
    scanf("%d", &N);

    int id;
    int grade;
    for (int i = 1; i <= N; i++) {
        scanf("%d %d", &id, &grade);
        score[id] += grade;
    }

    int maxIndex = 1;
    int maxGrade = score[1];
    for (int i = 2; i <= N; i++) {
        if (score[i] > maxGrade) {
            maxGrade = score[i];
            maxIndex = i;
        }
    }
    printf("%d %d\n", maxIndex, maxGrade);

    return 0;
}