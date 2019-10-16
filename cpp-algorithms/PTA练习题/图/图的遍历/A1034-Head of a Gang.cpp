#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int N, K, nodeNum;
struct Node {
    int time;
    int adjv;
    Node(int adjv1, int time1)
        : time(time1)
        , adjv(adjv1)
    {
    }
};
struct Gang {
    string name;
    int totalNum;
    bool operator<(Gang& g)
    {
        return name < g.name;
    }
};
map<string, int> mp; //将姓名映射为int
vector<vector<Node> > G(2500);
vector<int> callSum(2500);
vector<int> visited(2500);

int nameToId(string s)
{
    if (mp.count(s) == 0)
        return -1;
    return mp[s];
}
string idToName(int id)
{
    for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        if (it->second == id)
            return it->first;
    }
    return "";
}

void getCallTime()
{
    for (int i = 0; i < nodeNum; i++) {
        int sum = 0;
        for (int j = 0; j < G[i].size(); j++)
            sum += G[i][j].time;

        callSum[i] = sum;
    }
}

int getGangCallTime(const vector<int>& v)
{
    int totalTime = 0;
    for (int i = 0; i < v.size(); i++) {
        totalTime += callSum[v[i]];
    }
    return totalTime / 2;
}
int findHead(const vector<int>& v)
{
    int maxTime = 0;
    int head = -1;
    for (int i = 0; i < v.size(); i++) {
        if (maxTime < callSum[v[i]]) {
            maxTime = callSum[v[i]];
            head = v[i];
        }
    }
    return head;
}

void DFS(int root, vector<int>& v)
{
    visited[root] = 1;
    v.push_back(root);
    for (int i = 0; i < G[root].size(); i++) {
        if (!visited[G[root][i].adjv]) {
            DFS(G[root][i].adjv, v);
        }
    }
}
int main(void)
{
    cin >> N >> K;

    //读取输入
    for (int i = 0; i < N; i++) {
        string s1, s2;
        int time;
        cin >> s1 >> s2 >> time;
        if (mp.count(s1) == 0) {
            mp[s1] = nodeNum++;
        }
        if (mp.count(s2) == 0) {
            mp[s2] = nodeNum++;
        }
        int id1 = nameToId(s1);
        int id2 = nameToId(s2);
        G[id1].push_back(Node(id2, time));
        G[id2].push_back(Node(id1, time));
    }
    //获取每个人的总通话时长
    getCallTime();

    //DFS求解
    vector<Gang> ans;
    for (int i = 0; i < nodeNum; i++) {
        if (!visited[i]) {
            vector<int> v;
            DFS(i, v);
            if (v.size() > 2 && getGangCallTime(v) > K ) {
                Gang g;
                g.name = idToName(findHead(v));
                g.totalNum = v.size();
                ans.push_back(g);
            }
        }
    }

    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].name << ' ' << ans[i].totalNum << endl;
    }
}