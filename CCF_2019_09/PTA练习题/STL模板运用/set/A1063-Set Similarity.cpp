#include <iostream>
#include <set>
#include <stdio.h>
#include <vector>
using namespace std;
double getSimilarity(const set<int>& s1, const set<int>& s2)
{
    int total = s1.size();
    int sim = 0;
    set<int>::iterator it = s2.begin();
    while (it != s2.end()) {
        if (s1.count(*it) == 1) {
            sim++;
        } else {
            total++;
        }
        it++;
    }
    return sim * 1.0 / total;
}
int main(void)
{
    int N;
    cin >> N;
    vector<set<int> > vec(N + 1);

    //输入集合
    for (int i = 1; i <= N; i++) {
        int M;
        scanf("%d", &M);
        int num;
        for (int j = 0; j < M; j++) {
            scanf("%d", &num);
            vec[i].insert(num);
        }
    }

    //查询
    int K;
    cin >> K;
    int a, b;
    for (int i = 0; i < K; i++) {
        scanf("%d %d", &a, &b);
        double similarity;
        if (vec[a].size() > vec[b].size()) {
            similarity = getSimilarity(vec[a], vec[b]);
        } else
            similarity = getSimilarity(vec[b], vec[a]);
        printf("%.1f%%\n", similarity*100);
    }

    return 0;
}