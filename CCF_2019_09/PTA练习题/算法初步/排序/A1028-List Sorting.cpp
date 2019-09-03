#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int N, C;
struct Student {
    string id;
    string name;
    int grade;
    Student(){};
    Student(string id1, string name1, int grade1)
        : id(id1)
        , name(name1)
        , grade(grade1){};
};

bool cmp1(const Student& s1, const Student& s2)
{
    return s1.id < s2.id;
}
bool cmp2(const Student& s1, const Student& s2)
{
    if (s1.name == s2.name)
        return s1.id < s2.id;
    return s1.name < s2.name;
}
bool cmp3(const Student& s1, const Student& s2)
{
    if (s1.grade == s2.grade)
        return s1.id < s2.id;
    return s1.grade < s2.grade;
}
int main(void)
{
    cin >> N >> C;
    vector<Student> vec;
    Student s;
    for (int i = 0; i < N; i++) {
        cin >> s.id >> s.name >> s.grade;
        vec.push_back(s);
    }
    switch (C) {
    case 1:
        sort(vec.begin(), vec.end(), cmp1);
        break;
    case 2:
        sort(vec.begin(), vec.end(), cmp2);
        break;
    case 3:
        sort(vec.begin(), vec.end(), cmp3);
        break;
    default:
        break;
    }

    for (int i = 0; i < vec.size(); i++)
        cout << vec[i].id << ' ' << vec[i].name << ' ' << vec[i].grade << endl;

    return 0;
}