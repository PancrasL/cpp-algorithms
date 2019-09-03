#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Student {
    string id;
    int de;
    int cai;
    Student(){};
    Student(string id1, int de1, int cai1)
        : id(id1)
        , de(de1)
        , cai(cai1){};
};
int N, L, H;

bool cmpByTotal(const Student& s1, const Student& s2)
{
    int total1 = s1.de + s1.cai;
    int total2 = s2.de + s2.cai;
    if (total1 == total2) {
        if (s1.de == s2.de) {
            return s1.id < s2.id;
        } else
            return s1.de > s2.de;
    } else
        return total1 > total2;
}

void printInfo(const vector<Student>& vec)
{
    int len = vec.size();
    for (int i = 0; i < len; i++)
        cout << vec[i].id << ' ' << vec[i].de << ' ' << vec[i].cai << endl;
}
int main(void)
{
    vector<Student> v1, v2, v3, v4;
    Student s;
    cin >> N >> L >> H;
    while (N--) {
        cin >> s.id >> s.de >> s.cai;
        if (s.de < L || s.cai < L) //未获得录取资格
            continue;
        if (s.de >= H && s.cai >= H) //德才全尽
            v1.push_back(s);
        else if (s.de >= H && s.cai < H) //德胜才
            v2.push_back(s);
        else if (s.de < H && s.cai < H && s.de >= s.cai) //尚有德胜才
            v3.push_back(s);
        else
            v4.push_back(s);
    }
    sort(v1.begin(), v1.end(), cmpByTotal);
    sort(v2.begin(), v2.end(), cmpByTotal);
    sort(v3.begin(), v3.end(), cmpByTotal);
    sort(v4.begin(), v4.end(), cmpByTotal);

    cout << v1.size() + v2.size() + v3.size() + v4.size() << endl;
    printInfo(v1);
    printInfo(v2);
    printInfo(v3);
    printInfo(v4);
}