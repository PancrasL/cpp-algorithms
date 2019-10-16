#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct Mouse {
    int weight;
    int rank;
};
int main(void)
{
    int Np, Ng;
    cin >> Np >> Ng;

    //读取重量
    vector<Mouse> mouseVec(Np);
    for (int i = 0; i < Np; i++) {
        cin >> mouseVec[i].weight;
    }

    //读取初始排序
    queue<int> q;
    for (int i = 0; i < Np; i++) {
        int temp;
        cin >> temp;
        q.push(temp);
    }

    //模拟比赛过程
    while (q.size() != 1) {
        int totalMouseNum = q.size();
        int group;
        if (totalMouseNum % Ng == 0)
            group = totalMouseNum / Ng;
        else
            group = totalMouseNum / Ng + 1;

        queue<int> nextRound;
        //寻找各组中重量的大的mouse
        for (int i = 0; i < group; i++) {
            int biggest = q.front();
            for (int j = 0; j < Ng; j++) {
                int front = q.front();
                q.pop();
                mouseVec[front].rank = group + 1;
                if (mouseVec[front].weight > mouseVec[biggest].weight)
                    biggest = front;
                if (q.empty())
                    break;
            }
            nextRound.push(biggest);
        }
        q = nextRound;
    }
    mouseVec[q.front()].rank = 1;

    cout << mouseVec[0].rank;
    for (int i = 1; i < Np; i++)
        cout << ' ' << mouseVec[i].rank;
    cout << endl;

    return 0;
}