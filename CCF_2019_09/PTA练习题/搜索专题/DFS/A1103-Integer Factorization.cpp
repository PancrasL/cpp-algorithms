#include <cmath>
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int N, K, P;
vector<int> ans, temp;
int findBiggest(int N, int P)
{
    int i = sqrt(N);

    while (pow(i, P) > N) {
        i--;
    }

    return i;
}

int getVectorSum(const vector<int>& v)
{
    int sum = 0;
    int len = v.size();
    for (int i = 0; i < len; i++)
        sum += v[i];
    return sum;
}

int DFS(int num, int expSum, int vecSum)
{
    if (temp.size() == K) {
        return expSum == N;
    } else {
        if (expSum >= N)
            return 0;
        for (int i = num; i >= 1; i--) {
            temp.push_back(i);

            int newExpSum = expSum + pow(i, P);
            if (DFS(i, newExpSum, vecSum + i)) {
                int sum1 = getVectorSum(ans);
                int sum2 = vecSum + i;
                if (sum2 > sum1) //选择底数和大的
                    ans = temp;
                if (sum2 == sum1) { //选择字典序大的
                    int index = 0;
                    while(ans[index]==temp[index])
                        index++;
                    if(ans[index] < temp[index])
                        ans = temp;
                }
            }
            temp.pop_back();
        }
    }
    return 0;
}
int main(void)
{

    cin >> N >> K >> P;

    int biggest = findBiggest(N, P); //求N开P次根号的整数值

    temp.clear();
    DFS(biggest, 0, 0);

    if (ans.empty())
        cout << "Impossible" << endl;
    else {
        printf("%d = %d^%d", N, ans[0], P);
        for (int i = 1; i < ans.size(); i++)
            printf(" + %d^%d", ans[i], P);
        cout << endl;
    }
    return 0;
}