#include <iostream>
#include <string>
using namespace std;
int statistic[10];
int main(void)
{
    string num;
    cin >> num;

    int len = num.size();
    for (int i = 0; i < len; i++) {
        statistic[num[i] - '0']++;
    }

    for (int i = 0; i < 10; i++) {
        if (statistic[i]) {
            cout << i << ":" << statistic[i] << endl;
        }
    }

    return 0;
}