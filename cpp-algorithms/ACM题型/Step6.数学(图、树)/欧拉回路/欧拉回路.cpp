/*欧拉回路：连通+每个节点均为偶数度*/
#include <iostream>
#include <vector>
using namespace std;
#define MAX 1001
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
        vector<int> root(N + 1, -1);
        vector<int> degree(N + 1);
        //统计度、构建并查集
        for (int i = 0; i < M; i++) {
            int a, b;
            cin >> a >> b;
            degree[a]++;
            degree[b]++;
            int roota = find(root, a);
            int rootb = find(root, b);
            if (roota != rootb) {
                root[roota] = rootb;
            }
        }

        //判断度数
        int i;
        for (i = 1; i < degree.size(); i++) {
            if (degree[i] % 2 == 1) {
                break;
            }
        }
        if (i == degree.size()) {//所有节点均为偶数度
            int r = find(root, 1);
            for (i = 2; i < degree.size(); i++) {
                if (r != find(root, i)) {//不连通
                    cout << 0 << endl;
                    break;
                }
            }
            if (i == degree.size())
                cout << 1 << endl;
        } else {//有奇数度的节点
            cout << 0 << endl;
        }
    }
}