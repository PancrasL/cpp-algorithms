#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Student {
    string id;
    int location;
    int score;
    Student(){};
    Student(string id1, int location1, int score1)
        : id(id1)
        , location(location1)
        , score(score1){};

    bool operator<(const Student& s)
    {
        if(score==s.score){
            return id<s.id;
        }
        return score > s.score;
    }
};
int findLocalRank(const vector<Student>& vec, const string& id)
{
    int i;
    for (i = 0; i < vec.size(); i++) {
        if (vec[i].id == id)
            break;
    }
    if (i == vec.size())
        return -1;
    int rank = 1;
    for (int j = 0; j < i; j++) {
        if (vec[j].score > vec[i].score)
            rank++;
    }
    return rank;
}
int main(void)
{
    int N;
    cin >> N;
    vector<Student> all; //总排名
    vector<vector<Student> > local(N + 1); //班级排名
    for (int i = 1; i <= N; i++) {
        int K;
        cin >> K;
        Student s;
        for (int j = 0; j < K; j++) {
            cin >> s.id >> s.score;
            s.location = i;
            local[i].push_back(s);
            all.push_back(s);
        }
        sort(local[i].begin(), local[i].end());
    }
    sort(all.begin(), all.end());

    int rank = 1;
    cout<<all.size()<<endl;
    for (int i = 0; i < all.size(); i++) {
        if (i > 0) {
            if (all[i].score != all[i - 1].score)
                rank = i + 1;
        }
        cout << all[i].id << ' ' << rank << ' ' << all[i].location << ' ' << findLocalRank(local[all[i].location], all[i].id) << endl;
    }
}