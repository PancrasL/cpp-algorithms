#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
struct node {
    int begin;
    int end;
    node(int begin1, int end1)
        : begin(begin1)
        , end(end1){};
    node(){};
    bool operator<(node& n)
    {
        return end < n.end;
    }
};
int main(void)
{
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        vector<node> vec;
        for (int i = 0; i < n; i++) {
            int s, c;
            scanf("%d %d", &s, &c);
            vec.push_back(node(s, c));
        }
        sort(vec.begin(), vec.end());
        node temp = vec[0];
        int ans = 1;
        for (int i = 1; i < vec.size(); i++) {
            if (vec[i].begin >= temp.end) {
                temp = vec[i];
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}