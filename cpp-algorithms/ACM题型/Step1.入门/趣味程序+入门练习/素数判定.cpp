// #include <iostream>
// #include <math.h>
// using namespace std;

// int isnotprime(int n)
// {
//     if (n % 2 == 0)
//         return 1;

//     int end = sqrt(n), i;
//     for (i = 3; i <= end; i += 2) {
//         if (n % i == 0)
//             break;
//     }

//     return i > end ? 0 : 1;
// }
// int fun(int number)
// {
//     return number * number + number + 41;
// }
// int main(void)
// {
//     int x, y;
//     while (cin >> x >> y) {
//         if (x == 0 && y == 0)
//             break;
//         int i;
//         for (i = x; i <= y; i++) {
//             if (isnotprime(fun(i)))
//                 break;
//         }
//         if (i > y)
//             cout << "OK" << endl;
//         else
//             cout << "Sorry" << endl;
//     }
//     return 0;
// }