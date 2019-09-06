#include <iostream>
#include <map>
using namespace std;
int score[101];
int main(void)
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        score[num]++;
    }
    int K;
    cin >> K;
    bool first = true;
    while (K--) {
        int num;
        cin >> num;
        if (first) {
            cout << score[num];
            first = false;
        } else {
            cout << ' ' << score[num];
        }
    }
}