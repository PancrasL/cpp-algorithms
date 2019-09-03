#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

string findEnds(const string& s1, const string& s2)
{
    int index1 = s1.length() - 1;
    int index2 = s2.length() - 1;
    string ans;
    while (true) {
        if (index1 < 0 || index2 < 0)
            break;
        if (s1[index1] != s2[index2])
            break;
        ans.push_back(s1[index1]);
        index1--;
        index2--;
    }
    reverse(ans.begin(), ans.end());
    
    return ans;
}
int main(void)
{
    vector<string> vec;
    int N;
    cin >> N;
    getchar();
    while (N--) {
        string line;
        getline(cin, line);
        vec.push_back(line);
    }

    string ends = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        ends = findEnds(ends, vec[i]);
        if (ends == "")
            break;
    }

    if (ends != "") {
        cout << ends << endl;
    } else {
        cout << "nai" << endl;
    }

    return 0;
}