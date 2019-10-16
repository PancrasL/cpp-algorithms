#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define MAX 10000
vector<int> sum(MAX + 1);
vector<int> ans(MAX + 1);
//计算出因数和
void caculate()
{
    sum[1] = 0;
    for (int i = 1; i <= MAX / 2; i++) {
        for (int j = i + i; j < MAX; j += i) {
            sum[j] += i;
        }
    }
}
//计算出范围内完数的个数
void getAns()
{
    caculate();
    for (int i = 2; i < MAX; i++) {
        if (sum[i] == i) {
            ans[i] = ans[i - 1] + 1;
        } else {
            ans[i] = ans[i - 1];
        }
    }
}
int main(void)
{
    getAns();
    int n;
    cin >> n;
    while (n--) {
        int num1, num2;
        cin >> num1 >> num2;
        if (num1 > num2)
            swap(num1, num2);
        cout << ans[num2] - ans[num1 - 1] << endl;
    }
    return 0;
}