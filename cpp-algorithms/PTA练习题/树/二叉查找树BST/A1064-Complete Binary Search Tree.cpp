#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int N;
vector<int> inOrder(1010);
int index = 0;
vector<int> CBT(1010); //complete binary tree
void inTraverse(int root)
{
    if (root > N)
        return;
    inTraverse(2 * root);
    CBT[root] = inOrder[index++];
    inTraverse(2 * root + 1);
}
int main(void)
{
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> inOrder[i];
    sort(inOrder.begin(), inOrder.begin() + N);

    inTraverse(1);

    cout << CBT[1];
    for (int i = 2; i <= N; i++) {
        cout << ' ' << CBT[i];
    }
    cout << endl;

    return 0;
}