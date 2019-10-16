//注意0的输出
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    int A, B, D;

    cin >> A >> B >> D;
    int sum = A + B;

    if (sum == 0)
        cout << 0;
    stack<int> s;
    while (sum) {
        s.push(sum % D);
        sum /= D;
    }

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;
}