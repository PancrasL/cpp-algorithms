#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Student {
    string id;
    int score;
    char type;
    Student(){};
    Student(string id1, int score1, char type1)
        : id(id1)
        , score(score1)
        , type(type1){};
    bool operator==(const Student& s)
    {
        return id == s.id;
    }
    bool operator<(const Student& s)
    {
        return score > s.score;
    }
};

int findRank(const vector<Student>& vec, const string& id)
{
    //查找学生
    int i;
    int len = vec.size();
    for (i = 0; i < len; i++) {
        if (vec[i].id == id)
            break;
    }

    //不存在该学生
    if (i == len)
        return -1;

    //计算名次
    int rank = 1;
    for (int j = 0; j < i; j++) {
        if (vec[j].score > vec[i].score)
            rank++;
    }

    return rank;
}
int main(void)
{
    int n, m;
    cin >> n >> m;

    //读取输入
    vector<Student> vecC, vecM, vecE, vecA;
    string id;
    int C, M, E, A;
    for (int i = 0; i < n; i++) {
        cin >> id >> C >> M >> E;
        A = (C + M + E) / 3.0 + 0.5;
        vecC.push_back(Student(id, C, 'C'));
        vecM.push_back(Student(id, M, 'M'));
        vecE.push_back(Student(id, E, 'E'));
        vecA.push_back(Student(id, A, 'A'));
    }

    //排序
    sort(vecC.begin(), vecC.end());
    sort(vecM.begin(), vecM.end());
    sort(vecE.begin(), vecE.end());
    sort(vecA.begin(), vecA.end());

    //查询
    for (int i = 0; i < m; i++) {
        cin >> id;
        int bestRank = 0x3f3f3f3f; //最优名次
        char type;
        //在A中查找
        int rank = findRank(vecA, id);
        if (rank == -1) {
            cout << "N/A" << endl;
            continue;
        }
        if (rank < bestRank) {
            bestRank = rank;
            type = 'A';
        }

        //在C中查找
        rank = findRank(vecC, id);
        if (rank < bestRank) {
            bestRank = rank;
            type = 'C';
        }
        //在M中查找
        rank = findRank(vecM, id);
        if (rank < bestRank) {
            bestRank = rank;
            type = 'M';
        }
        //在E中查找
        rank = findRank(vecE, id);
        if (rank < bestRank) {
            bestRank = rank;
            type = 'E';
        }

        cout << bestRank << ' ' << type << endl;
    }

    return 0;
}