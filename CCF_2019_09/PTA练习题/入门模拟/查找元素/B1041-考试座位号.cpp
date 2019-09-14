#include <algorithm>
#include <iostream>
#include <string>
//使用结构体保存信息，然后直接查找
#include <vector>
using namespace std;
struct node {
    int test; //试机号
    int sit; //座位号
    string id; //准考证号

};
bool operator<(const node& n1, const node& n2)
{
    return n1.test < n2.test;
}
bool operator==(const node& n1, const node& n2)
{
    return n1.test == n2.test;
}
int main(void)
{

    int N;
    cin >> N;
    vector<node> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i].id >> vec[i].test >> vec[i].sit;
    }
    sort(vec.begin(), vec.end());
    int M;
    cin >> M;
    while (M--) {
        node n;
        cin >> n.test;
        vector<node>::iterator it = find(vec.begin(), vec.end(), n);
        cout << it->id << ' ' << it->sit << endl;
    }

    return 0;
}