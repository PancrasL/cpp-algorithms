//注意Absent和NA的输出
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct node {
    string name;
    string ID;
    int grade;
    node(string name1, string ID1, int grade1)
        : name(name1)
        , ID(ID1)
        , grade(grade1){};
    node(){};
    friend bool operator<(const node& n1, const node& n2);
};
bool operator<(const node& n1, const node& n2)
{
    return n1.grade < n2.grade;
}

int main(void)
{
    int N;
    string name, gender, id;
    int grade;

    vector<node> male;
    vector<node> female;
    cin>>N;
    while (N--) {
        cin >> name >> gender >> id >> grade;
        if (gender == "M") {
            male.push_back(node(name, id, grade));
        } else {
            female.push_back(node(name, id, grade));
        }
    }
    sort(male.begin(), male.end());
    sort(female.begin(), female.end());

    bool flag = false;
    node n1, n2;
    if (female.empty()) {
        flag = true;
        cout << "Absent" << endl;
    } else {
        n1 = female[female.size() - 1];
        cout << n1.name << ' ' << n1.ID << endl;
    }
    if (male.empty()) {
        flag = true;
        cout << "Absent" << endl;
    } else {
        n2 = male[0];
        cout << n2.name << ' ' << n2.ID << endl;
    }
    if (flag) {
        cout << "NA" << endl;
    } else {
        cout << n1.grade - n2.grade << endl;
    }

    return 0;
}