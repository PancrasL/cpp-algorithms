#include <iostream>
#include <set>
#include <vector>
using namespace std;
int find(vector<int>& root, int x)
{
    if (root[x] == -1)
        return x;
    else
        return root[x] = find(root, root[x]);
}
int Union(vector<int>& root, int a, int b)
{
    int roota = find(root, a);
    int rootb = find(root, b);
    if (roota != rootb)
        root[roota] = rootb;
}
int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<int> root(n + 1, -1);

    while (m--) {
        int a, b;
        cin >> a >> b;
        Union(root, a, b);
    }

    set<int> s;
    for (int i = 1; i <= n; i++) {
        s.insert(find(root, i));
    }
    cout << s.size();

    return 0;
}