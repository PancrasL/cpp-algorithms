#include <iostream>
#include <map>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
struct Account {
    string name;
    string password;
};
map<char, char> mp;
bool isModified(string& name, string& password)
{
    bool flag = false;
    int len = password.size();
    for (int i = 0; i < len; i++) {
        char temp = mp[password[i]];
        if (temp) {
            password[i] = temp;
            flag = true;
        }
    }

    return flag;
}
int main(void)
{
    //建立字符映射表
    mp['1'] = '@';
    mp['0'] = '%';
    mp['l'] = 'L';
    mp['O'] = 'o';

    int N;
    cin >> N;
    Account account;
    vector<Account> vec;
    for (int i = 0; i < N; i++) {
        cin >> account.name >> account.password;
        if (isModified(account.name, account.password))
            vec.push_back(account);
    }

    if (vec.size() == 0) {
        if (N > 1)
            printf("There are %d accounts and no account is modified\n", N);
        else
            printf("There is 1 account and no account is modified\n");
    }
    else {
        cout << vec.size() << endl;
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i].name << ' ' << vec[i].password << endl;
        }
    }

    return 0;
}