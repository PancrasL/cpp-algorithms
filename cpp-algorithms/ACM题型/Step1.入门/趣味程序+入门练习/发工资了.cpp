// #include <iostream>
// using namespace std;
// int caculate(int salary)
// {
//     int cnt = 0;

//     cnt += salary / 100;
//     salary %= 100;

//     cnt += salary / 50;
//     salary %= 50;

//     cnt += salary / 10;
//     salary %= 10;

//     cnt += salary / 5;
//     salary %= 5;

//     cnt += salary / 2;
//     salary %= 2;

//     cnt += salary;

//     return cnt;
// }
// int main(void)
// {
//     int n;
//     while (cin >> n) {
//         if (n == 0)
//             break;
//         int salary;
//         int cnt = 0;
//         for (int i = 0; i < n; i++) {
//             cin >> salary;
//             cnt += caculate(salary);
//         }
//         cout << cnt << endl;
//     }
// }