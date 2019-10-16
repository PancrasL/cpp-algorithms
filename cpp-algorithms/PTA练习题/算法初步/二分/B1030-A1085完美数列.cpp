#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int N;
long long p;
int findAns(vector<long long>& v, int startIndex)
{
    vector<long long>::iterator it = upper_bound(v.begin(), v.end(), v[startIndex] * p);

    return it - (v.begin() + startIndex);
}
int main(void)
{

    cin >> N >> p;
    vector<long long> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int len = v.size();
    int ans = 0;
    for (int i = 0; i < len; i++) {
        ans = max(ans, findAns(v, i));
        if (len - i <= ans)
            break;
    }

    cout << ans << endl;

    return 0;
}