#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int M, N, K;
bool getAns(vector<int>& vec, int N)
{
    stack<int> s;
    int in = 1;
    int vecIndex = 0;
    while (true) {
        s.push(in++);
        if (s.size() > M)
            return false;
        while (!s.empty() && s.top() == vec[vecIndex]) {
            vecIndex++;
            s.pop();
        }
        if (in == N + 1)
            break;
    }
    return s.empty();
}
int main(void)
{
    cin >> M >> N >> K;

    for (int i = 1; i <= K; i++) {
        vector<int> vec(N);
        for (int i = 0; i < N; i++) {
            cin >> vec[i];
        }
        if (getAns(vec, N)) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }

    return 0;
}