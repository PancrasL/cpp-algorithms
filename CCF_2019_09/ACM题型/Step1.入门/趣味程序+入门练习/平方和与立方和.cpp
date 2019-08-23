// #include <iostream>
// using namespace std;
// int main(void)
// {
//     int a, b;
//     while (cin >> a >> b) {
//         int sum1, sum2;
//         sum1 = sum2 = 0;
//         if (a > b) {
//             int temp = a;
//             a = b;
//             b = temp;
//         }
//         for (int num = a; num <= b; num++) {
//             if (num & 1) {
//                 sum2 += (num * num * num);
//             } else
//                 sum1 += (num * num);
//         }
//         cout << sum1 << ' ' << sum2 << endl;
//     }
//     return 0;
// }