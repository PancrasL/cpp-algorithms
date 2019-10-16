#include <iostream>
#include <queue>
#include <stdio.h>
#include <vector>
using namespace std;
struct Node {
    double price;
    int level;
    vector<int> child;
} tree[100001];
int N;
double P, r;
double BFS(int root, int& cnt)
{
    queue<int> q;
    q.push(root);
    tree[root].price = P;
    tree[root].level = 1;
    double ans;
    while (!q.empty()) {
        int top = q.front();
        q.pop();
        if (tree[top].child.empty()) { //是叶节点
            ans = tree[top].price;
            cnt = 1;
            int level = tree[top].level;
            while(true){
                if(q.empty())
                    break;
                if(tree[q.front()].level!=level)
                    break;
                if(tree[q.front()].child.empty())
                    cnt++;
                q.pop();
            }
            return ans;
        }
        vector<int>& v = tree[top].child;
        for (int i = 0; i < v.size(); i++) {
            q.push(v[i]);
            tree[v[i]].price = tree[top].price * (1 + 0.01 * r);
            tree[v[i]].level = tree[top].level + 1;
        }
    }
    return -1;
}
int main(void)
{
    cin >> N >> P >> r;

    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;
        if (K != 0) {
            while (K--) {
                int c;
                cin >> c;
                tree[i].child.push_back(c);
            }
        }
    }

    int cnt;
    double price = BFS(0, cnt);
    printf("%.4f %d\n", price, cnt);

    return 0;
}