#include <algorithm>
#include <iostream>
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
    bool operator<(ArcNode& n)
    {
        return cost < n.cost;
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
    int N, M;
    while (cin >> N) {
        if (N == 0)
            break;
        cin >> M;
        vector<int> root(M + 1, -1);

        vector<ArcNode> arcs;
        for (int i = 0; i < N; i++) {
            int a, b, cost;
            cin >> a >> b >> cost;
            arcs.push_back(ArcNode(a, b, cost));
        }

        sort(arcs.begin(), arcs.end());

        int minCost = 0;
        int arcNum = 0;
        for (int i = 0; i < arcs.size(); i++) {
            int roota = find(root, arcs[i].a);
            int rootb = find(root, arcs[i].b);
            if (roota == rootb)
                continue;
            else {
                root[roota] = rootb;
                minCost += arcs[i].cost;
                arcNum++;
                if (arcNum == M - 1)
                    break;
            }
        }
        if (arcNum == M - 1)
                cout << minCost << endl;
            else
                cout << "?" << endl;
    }
}