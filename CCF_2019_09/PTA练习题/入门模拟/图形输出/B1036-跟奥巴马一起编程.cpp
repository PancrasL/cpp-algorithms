//注意输出的字符
#include <iostream>
using namespace std;
int main(void)
{
    int N;
    char c;
    cin >> N >> c;

    //输出第一行
    for (int i = 0; i < N; i++) {
        cout << c;
    }
    cout << endl;
    //输出中间行
    int line = (N + 1) / 2 - 2;
    for (int k = 0; k < line; k++) {
        cout << c;
        for (int i = 0; i < N - 2; i++) {
            cout << ' ';
        }
        cout << c << endl;
    }
    //输出最后一行
    for (int i = 0; i < N; i++) {
        cout << c;
    }
    cout << endl;

    return 0;
}