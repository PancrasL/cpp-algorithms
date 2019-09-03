#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
int main(void)
{
    int N, K;
    cin >> N >> K;
    unordered_map<int, vector<string>> mp;
    for (int i = 0; i < N; i++) {
        string name;
        int C;
        cin >> name >> C;
        for (int i = 0; i < C; i++) {
            int course;
            cin>>course;
            mp[course].push_back(name);
        }
    }

    for (int i = 1; i <= K; i++) {
        vector<string>& vec = mp[i];
        sort(vec.begin(), vec.end());
        int len = vec.size();
        printf("%d %d\n", i, len);
        for (int j = 0; j < len; j++)
            printf("%s\n", vec[j].c_str());
    }

    return 0;
}