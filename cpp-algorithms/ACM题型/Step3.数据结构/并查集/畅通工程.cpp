#include <iostream>
#include <set>
#include <vector>
using namespace std;
int N, M;
int find(vector<int>& root, int x)
{
    if (root[x] == -1)
        return x;
    else
        return root[x] = find(root, root[x]);
}
int main(void)
{
    while (cin >> N) {
        if (N == 0)
            break;
        //并查集合并
        cin >> M;
        vector<int> root(N + 1, -1);
        for (int i = 0; i < M; i++) {
            int a, b;
            cin >> a >> b;
            int roota, rootb;
            roota = find(root, a);
            rootb = find(root, b);
            if (roota != rootb)
                root[roota] = rootb;
        }
        //统计集合的个数
        set<int> s;
        for (int i = 1; i <= N; i++) {
            s.insert(find(root, i));
        }
        cout << s.size() - 1 << endl;
    }
    return 0;
}