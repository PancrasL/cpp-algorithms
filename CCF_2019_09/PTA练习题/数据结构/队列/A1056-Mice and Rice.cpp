#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
struct Mouse {
    int id;
    int weight;
    int rank;
    Mouse(int id1 = -1, int weight1 = -1, int rank1 = -1)
        : id(id1)
        , weight(weight1)
        , rank(rank1){};
};
bool cmp1(const Mouse& m1, const Mouse& m2)
{
    return m1.weight > m2.weight;
}
bool cmp2(const Mouse& m1, const Mouse& m2)
{
    return m1.id < m2.id;
}
int main(void)
{
    int Ng, Np;
    cin >> Np >> Ng;

    //录入老鼠的重量
    vector<Mouse> vec(Np);
    for (int i = 0; i < Np; i++) {
        cin >> vec[i].weight;
        vec[i].id = i;
        vec[i].rank = -1;
    }

    //读取初始顺序
    queue<Mouse> q;
    for (int i = 0; i < Np; i++) {
        int index;
        cin >> index;
        q.push(vec[index]);
    }

    //处理特殊情况
    if (Ng == 1) {
        sort(vec.begin(), vec.end(), cmp1);
        for (int i = 0; i < vec.size(); i++)
            vec[i].rank = i + 1;
        sort(vec.begin(), vec.end(), cmp2);
        cout << vec[0].rank;
        for (int i = 1; i < vec.size(); i++)
            cout << ' ' << vec[i].rank;
        cout << endl;
        return 0;
    }

    //模拟晋级过程
    int score = 0; //第i轮淘汰获得i积分
    while (true) {
        Mouse biggest;
        queue<Mouse> nextRound;
        int cnt = 0;
        while (!q.empty()) { //模拟一轮的晋级过程
            Mouse m = q.front();
            q.pop();

            vec[m.id].rank = score;

            if (biggest.weight < m.weight) {
                biggest = m;
            }
            if (++cnt == Ng) {
                cnt = 0;
                nextRound.push(biggest);
                biggest.weight = -1;
            }
        }
        if (cnt > 1 || (!nextRound.empty() && cnt)) //只剩一组但人数不足一组且又多于两人或剩余多组但最后一组人数不足
            nextRound.push(biggest);
        if (nextRound.empty()) //已经是最后一轮
            break;

        q = nextRound;
        score++;
    }

    //根据积分计算获得各积分的人数
    vector<int> scoreNum(score + 1, 0);
    for (int i = 0; i < vec.size(); i++)
        scoreNum[vec[i].rank]++;

    //根据积分人数计算高于该积分的累积人数（加上1即排名）
    vector<int> rankVec(score + 1, 0);
    int cnt = 0;
    for (int i = score; i >= 0; i--) {
        rankVec[i] = cnt;
        cnt += scoreNum[i];
    }

    cout << rankVec[vec[0].rank] + 1;
    for (int i = 1; i < vec.size(); i++) {
        cout << ' ' << rankVec[vec[i].rank] + 1;
    }
    cout << endl;
}