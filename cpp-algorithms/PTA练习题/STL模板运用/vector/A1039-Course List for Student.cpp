#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;
int main(void)
{
    int N, K;
    cin >> N >> K;
    unordered_map<string, vector<int> > mp;
    for (int index = 0; index < K; index++) {
        int i, Ni; //课程号、选该课的人数
        cin >> i >> Ni;
        for (int j = 0; j < Ni; j++) {
            string name;
            cin >> name;
            mp[name].push_back(i);
        }
    }

    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        vector<int>& vec = mp[name];
        sort(vec.begin(), vec.end());
        cout << name << ' ' << vec.size();
        for (int i = 0; i < vec.size(); i++)
            cout << ' ' << vec[i];
        cout << endl;
    }
}