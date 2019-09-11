#include <iostream>
#include <vector>
using namespace std;
int N, M, K;
vector<vector<int> > G;
vector<int> visited;
int inValid;

void DFS(int city)
{
    visited[city] = 1;
    //遍历该city的所有邻接城市
    for (int i = 0; i < G[city].size(); i++) {
        int adjCity = G[city][i];
        if (!visited[adjCity] && adjCity != inValid)
            DFS(adjCity);
    }
}

int getAns()
{
    visited.assign(N + 1, 0);

    int cnt = 0; //统计连通块的个数
    for (int i = 1; i <= N; i++) {
        int city = i;
        if (!visited[city] && city != inValid) {
            DFS(city);
            cnt++;
        }
    }
    return cnt - 1;
}

int main(void)
{
    cin >> N >> M >> K;

    G.resize(N + 1);
    for (int i = 1; i <= M; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    for (int i = 0; i < K; i++) {
        cin >> inValid;
        cout << getAns() << endl;
    }
}