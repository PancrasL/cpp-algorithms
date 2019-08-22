// #include <iostream>
// #include <stdio.h>
// using namespace std;
// double ans[1000];
// void getAns()
// {
//     ans[1] = 1;
//     for (int i = 2; i < 1000; i++) {
//         if (i & 1) {
//             ans[i] = ans[i - 1] + 1.0 / i;
//         } else {
//             ans[i] = ans[i - 1] - 1.0 / i;
//         }
//     }
// }
// int main(void)
// {
//     getAns();
//     int m, n;
//     cin >> m;
//     while (m--) {
//         cin >> n;
//         printf("%.2f\n", ans[n]);
//     }
//     return 0;
// }