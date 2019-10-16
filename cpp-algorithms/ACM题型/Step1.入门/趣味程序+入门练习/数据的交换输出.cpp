// #include <iostream>
// #include <vector>
// using namespace std;
// int main(void)
// {
//     int x;
//     while (cin >> x) {
//         if (x == 0)
//             break;
//         vector<int> nums(x);
//         int index = 0;
//         int minNum = INT_MAX;
//         for (int i = 0; i < x; i++) {
//             cin >> nums[i];
//             if (nums[i] < minNum) {
//                 minNum = nums[i];
//                 index = i;
//             }
//         }
//         nums[index] = nums[0];
//         nums[0] = minNum;
//         cout << nums[0];
//         for (int i = 1; i < x; i++)
//             cout << ' ' << nums[i];
//         cout << endl;
//     }
//     return 0;
// }