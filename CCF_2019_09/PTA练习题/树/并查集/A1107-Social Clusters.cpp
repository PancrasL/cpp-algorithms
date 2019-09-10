#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <stdio.h>
#include <functional>
using namespace std;
int N;
int find(vector<int>& root, int x)
{
    if (root[x] == -1)
        return x;
    else
        return root[x] = find(root, root[x]);
}
void unit(vector<int>& root, int a, int b)
{
    int roota = find(root, a);
    int rootb = find(root, b);
    if (roota != rootb) {
        root[roota] = rootb;
    }
}
vector<int> course(1010, -1); //记录喜欢活动i的用户

int main(void)
{
    vector<int> root(1010, -1);
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int K, hobby;
        cin >> K;
        getchar();
        while (K--) {
            cin >> hobby;
            if (course[hobby] == -1) {
                course[hobby] = i;
            } else {
                int id = course[hobby];
                unit(root, i, id);
            }
        }
    }

    map<int, int> mp;
    for (int i = 1; i <= N; i++) {
        int x = find(root, i);
        mp[x]++;
    }
    cout << mp.size() << endl;

    vector<int> v;
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
        v.push_back(it->second);

    sort(v.begin(), v.end(), greater<int>());
    cout << v[0];
    for (int i = 1; i < v.size(); i++)
        cout << ' ' << v[i];
    cout << endl;
}