#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
struct Node {
    int a;
    int b;
    int cost;
    Node(){};
    Node(int a1, int b1, int c1)
        : a(a1)
        , b(b1)
        , cost(c1){};
    bool operator<(Node& p)
    {
        return cost < p.cost;
    }
};
int N;
int find(vector<int>& root, int x)
{
    if (root[x] == -1)
        return x;
    else
        return root[x] = find(root, root[x]);
}
int main(void)
{
    while (true) {
        cin >> N;
        if (N == 0)
            break;
        vector<Node> Arc;
        for (int i = 0; i < N * (N - 1) / 2; i++) {
            int a, b, c, t;
            scanf("%d %d %d %d", &a, &b, &c, &t);
            if (t == 0)
                Arc.push_back(Node(a, b, c));
            else
                Arc.push_back(Node(a, b, 0));
        }

        sort(Arc.begin(), Arc.end());

        vector<int> root(N + 1, -1);
        int num = 0; //添加的边数
        int cost = 0; //添加的边的权值和
        for (int i = 0; i < Arc.size(); i++) {
            int roota, rootb;
            roota = find(root, Arc[i].a);
            rootb = find(root, Arc[i].b);
            if (roota == rootb)
                continue;
            cost += Arc[i].cost;
            root[roota] = rootb;
            num++;
            if (num == N - 1)
                break;
        }
        if (num == N - 1)
            cout << cost << endl;
    }
    return 0;
}
