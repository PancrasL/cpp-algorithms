#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
map<string, int> visited;
map<char, vector<string> > words;
int DFS(char start, char end)
{
    if (start == end)
        return 1;
    int len = words[start].size();

    for (int i = 0; i < len; i++) {
        string s = words[start][i];
        if (!visited[s]) {
            visited[s] = 1;
            if (DFS(s[s.size() - 1], end))
                return 1;
        }
    }
    return 0;
}
int main(void)
{
    string s;
    while (cin >> s) {
        words.clear();
        visited.clear();
        while (true) {
            if (s == "0")
                break;
            words[s[0]].push_back(s);
            cin >> s;
        }
        if (DFS('b', 'm'))
            cout << "Yes." << endl;
        else
            cout << "No." << endl;
    }
    return 0;
}