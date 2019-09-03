#include <iostream>
#include <string>
#include <vector>
using namespace std;
int weight[] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
char verify[] = "10X98765432";

bool verifyIdCard(const string& id)
{
    int sum = 0; //校验和

    for (int i = 0; i < 17; i++) {
        sum = sum + (id[i] - '0') * weight[i];
    }
    sum %= 11;

    return id[17] == verify[sum];
}
int main(void)
{
    int N;
    string id;

    vector<string> wrong;
    cin>>N;
    while (N--) {
        cin >> id;
        if (!verifyIdCard(id)) {
            wrong.push_back(id);
        }
    }
    if (wrong.empty())
        cout << "All passed" << endl;
    else {
        for (int i = 0; i < wrong.size(); i++)
            cout << wrong[i] << endl;
    }

    return 0;
}