#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int N, a;
    vector<int> vec;
    cin >> N >> a;

    //将N化为a进制
    while (N) {
        vec.push_back(N % a);
        N /= a;
    }

    //判断是否为回文数
    int size = vec.size();
    bool isPalindromic = true;
    for (int i = 0; i < size / 2; i++) {
        if (vec[i] != vec[size - 1 - i]) {
            isPalindromic = false;
            break;
        }
    }

    //输出结果
    cout << (isPalindromic ? "Yes" : "No") << endl;
    if (!vec.empty()) {
        cout << vec[size - 1];
        for (int i = size - 2; i >= 0; i--)
            cout << ' ' << vec[i];
        cout << endl;
    } else
        cout << 0 << endl;
    return 0;
}