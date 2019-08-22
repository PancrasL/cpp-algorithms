// #include <ctype.h>
// #include <iostream>
// #include <string>
// #include <stdio.h>
// using namespace std;
// int main(void)
// {
//     int n;
//     cin >> n;
//     getchar();
//     string str;
//     while (n--) {
//         getline(cin, str);
//         if (str[0] == '_' || isalpha(str[0])) {
//             int i;
//             for (i = 1; i < str.size(); i++) {
//                 if (str[i] == '_' || isalnum(str[i]))
//                     continue;
//                 break;
//             }
//             if (i != str.size())
//                 cout << "no" << endl;
//             else
//                 cout << "yes" << endl;
//         } else
//             cout << "no" << endl;
//     }
//     return 0;
// }