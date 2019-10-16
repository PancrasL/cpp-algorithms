#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct Node {
    int level;
    vector<int> child;
} tree[110];
int N, M;
int level, cnt;
void BFS(int root)
{
    tree[root].level = 1;
    queue<int> q;
    q.push(root);

    int curLevel = 0;
    int curNum = 0;
    while (!q.empty()) {
        int top = q.front();
        q.pop();
        if (curLevel != tree[top].level) { //进入到新的一代
            if (curNum > cnt) {
                cnt = curNum;
                level = curLevel;
            }
            curNum = 1;
            curLevel = tree[top].level;
        } else {
            curNum++;
        }
        vector<int>& v = tree[top].child;
        for (int i = 0; i < v.size(); i++) {
            q.push(v[i]);
            tree[v[i]].level = tree[top].level + 1;
        }
    }
    if (curNum > cnt) {
        cnt = curNum;
        level = curLevel;
    }
}
int main(void)
{
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int parent, k;
        cin >> parent >> k;
        while (k--) {
            int c;
            cin >> c;
            tree[parent].child.push_back(c);
        }
    }

    BFS(1);

    cout << cnt << ' ' << level << endl;
}