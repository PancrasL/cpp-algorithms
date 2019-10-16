#include <functional>
#include <iostream>
#include <queue>
using namespace std;
class cmp {
public:
    bool operator()(long long a, long long b)
    {
        return b > a;
    }
};
int main(void)
{
    int n;
    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long> > q;
    for (int i = 0; i < n; i++) {
        long long weight;
        cin >> weight;
        q.push(weight);
    }
    long long ans = 0;
    while (!q.empty()) {
        long long top1 = q.top();
        q.pop();
        if (q.empty()) {
            cout << ans << endl;
            break;
        }
        long long top2 = q.top();
        q.pop();
        q.push(top1 + top2);
        ans += top1 + top2;
    }
    return 0;
}