#include <iostream>
#include <queue>
#include <stdio.h>
#include <vector>
using namespace std;
struct Node {
    double price;
    double weight;
    vector<int> child;
    Node()
    {
        price = 0;
    }
} tree[100001];
int N;
double P, r;
double BFS(int root)
{
    double ans = 0;
    queue<int> q;
    q.push(root);
    while (!q.empty()) {
        int top = q.front();
        q.pop();
        if (tree[top].child.empty()) //是叶节点
        {
            ans += tree[top].price * tree[top].weight;
        } else { //是内节点
            vector<int>& child = tree[top].child;
            double newPrice = tree[top].price * (1 + 0.01 * r);
            for (int i = 0; i < child.size(); i++) {
                tree[child[i]].price = newPrice;
                q.push(child[i]);
            }
        }
    }
    return ans;
}
int main(void)
{
    cin >> N >> P >> r;

    //读取输入
    int root = 0;
    tree[root].price = P;
    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;
        if (K == 0) { //根节点
            double weight;
            cin >> weight;
            tree[i].weight = weight;
        } else { //内节点
            while (K--) {
                int child;
                cin >> child;
                tree[i].child.push_back(child);
            }
        }
    }

    //求解每一个节点的价格，得到答案
    double ans = BFS(root);

    //输出结果
    printf("%.1f\n", ans);
}