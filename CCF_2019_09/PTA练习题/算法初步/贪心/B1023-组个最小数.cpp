#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int hashTable[10];
int main(void)
{
    vector<int> vec;
    int num;
    int zeroNum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        hashTable[i] = num;
    }

    string ans;
    for (int i = 1; i < 10; i++) {
        if (hashTable[i] != 0) {
            ans.push_back(i + '0');
            hashTable[i]--;
            break;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (hashTable[i] != 0) {
            ans.append(hashTable[i], i + '0');
        }
    }

    cout << ans << endl;

    return 0;
}