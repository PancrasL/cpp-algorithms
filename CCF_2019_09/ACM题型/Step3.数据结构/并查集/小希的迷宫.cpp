#include <iostream>
#include <set>
#include <vector>
using namespace std;
#define MAX 100000
int find(vector<int>& root, int x)
{
    if (root[x] == -1)
        return x;
    else
        return root[x] = find(root, root[x]);
}
int main(void)
{
    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == -1 && b == -1)
            break;

        //并查集合并
        bool flag = false;
        vector<int> root(MAX, -1);
        set<int> sequence; //迷宫中的房间序号
        while (true) {
            if (a == 0 && b == 0)
                break;
            sequence.insert(a);
            sequence.insert(b);

            int roota = find(root, a);
            int rootb = find(root, b);

            if (roota == rootb)
                flag = true;
            else
                root[roota] = rootb;
            cin >> a >> b;
        }
        if (flag) //有环路
            cout << "No" << endl;
        else if(sequence.size() == 0)//空迷宫
            cout<< "Yes" <<endl;
        else {
            set<int> s;
            set<int>::iterator it = sequence.begin();
            while (it != sequence.end()) {
                s.insert(find(root, *it++));
            }
            if (s.size() != 1) //不连通
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
}