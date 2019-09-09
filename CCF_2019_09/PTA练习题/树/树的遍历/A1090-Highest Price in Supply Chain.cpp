#include <algorithm>
#include <iostream>
#include <queue>
#include <stdio.h>
#include <vector>
using namespace std;
struct Node {
    double price;
    vector<int> child;
} tree[100001];
int N;
double P, r;
double BFS(int root, int& cnt)
{
    double maxPrice = 0;
    queue<int> q;
    q.push(root);
    while (!q.empty()) {
        int top = q.front();
        q.pop();
        if (tree[top].price > maxPrice) {
            maxPrice = tree[top].price;
            cnt = 1;
        } else if (tree[top].price == maxPrice) {
            cnt++;
        }
        vector<int>& v = tree[top].child;
        for (int i = 0; i < v.size(); i++) {
            q.push(v[i]);
            tree[v[i]].price = tree[top].price * (1 + 0.01 * r);
        }
    }

    return maxPrice;
}
int main(void)
{
    cin >> N >> P >> r;

    int parent, root;
    for (int i = 0; i < N; i++) {
        cin >> parent;
        if (parent == -1) {
            root = i;
        } else {
            tree[parent].child.push_back(i);
        }
    }

    tree[root].price = P;
    int cnt;
    double ans = BFS(root, cnt);
    printf("%.2f %d\n", ans, cnt);

    return 0;
}