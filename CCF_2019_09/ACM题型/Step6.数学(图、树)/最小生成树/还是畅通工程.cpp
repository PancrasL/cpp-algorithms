#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;
struct ArcNode {
    int a;
    int b;
    int cost;
    ArcNode(){};
    ArcNode(int a1, int b1, int cost1)
        : a(a1)
        , b(b1)
        , cost(cost1){};
    bool operator<(ArcNode& node)
    {
        return cost < node.cost;
    }
};
int find(vector<int>& root, int x)
{
    if (root[x] == -1)
        return x;
    else
        return root[x] = find(root, root[x]);
}
int main(void)
{
    int N;
    while (true) {
        scanf("%d", &N);
        if (N == 0)
            break;
        vector<ArcNode> vec(N * (N - 1) / 2);
        for (int i = 0; i < N * (N - 1) / 2; i++) {
            scanf("%d %d %d", &vec[i].a, &vec[i].b, &vec[i].cost);
        }

        sort(vec.begin(), vec.end());

        int minCost = 0;
        int cnt = 0;
        vector<int> root(N + 1, -1);
        for (int i = 0; i < vec.size(); i++) {
            int roota = find(root, vec[i].a);
            int rootb = find(root, vec[i].b);
            if (roota == rootb) {
                continue;
            } else {
                minCost += vec[i].cost;
                cnt++;
                root[roota] = rootb;
                if (cnt == N - 1)
                    break;
            }
        }
        printf("%d\n", minCost);
    }
    return 0;
}