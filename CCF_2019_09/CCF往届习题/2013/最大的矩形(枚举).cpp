#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> height(1001);
int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }
    int maxArea = 0;

    for (int i = 0; i < n; i++) {
        int left = i;
        int right = i;
        while (true) {
            if (left == 0)
                break;
            else if (height[left - 1] >= height[i])
                left--;
            else
                break;
        }

        while (true) {
            if (right == n - 1)
                break;
            else if (height[right + 1] >= height[i])
                right++;
            else
                break;
        }

        int area = (right - left +1) * height[i];
        maxArea = max(maxArea, area);
    }
    cout << maxArea << endl;
}