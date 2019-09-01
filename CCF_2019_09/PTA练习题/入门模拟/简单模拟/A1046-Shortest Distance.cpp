#include <algorithm>
#include <iostream>
using namespace std;
int N, M;
int sum;
int dis[100010];
int main(void)
{
    cin >> N;
    int num;
    int i = 1;
    while (N--) {
        cin >> num;
        sum += num;
        dis[++i] = sum;
    }

    cin >> M;
    while (M--) {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        int len1, len2;
        len1 = len2 = 0;
        len1 = dis[b] - dis[a];
        len2 = sum - len1;
        cout << min(len1, len2) << endl;
    }

    return 0;
}