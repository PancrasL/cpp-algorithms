// #include <iostream>
// #include <vector>
// #include <stdio.h>
// using namespace std;
// int main(void)
// {
//     int a, b;
//     while (cin >> a >> b) {
//         vector<int> ans;
//         if (a == 0 && b == 0)
//             break;
//         a *= 100;
//         int remain = a % b;
//         if (remain == 0) {
//             ans.push_back(remain);
//             remain += b;
//             while (remain < 100) {
//                 ans.push_back(remain);
//                 remain += b;
//             }
//         } else {
//             remain = b - remain;
//             ans.push_back(remain);
//             remain += b;
//             while (remain < 100) {
//                 ans.push_back(remain);
//                 remain += b;
//             }
//         }
//         printf("%02d", ans[0]);
//         for(int i=1;i<ans.size();i++){
//             printf(" %02d", ans[i]);
//         }
//         printf("\n");
//     }
// }