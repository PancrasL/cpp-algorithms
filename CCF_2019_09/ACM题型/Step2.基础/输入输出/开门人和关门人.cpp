#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
struct node {
    string id;
    int time;
    bool operator<(node& n)
    {
        return time < n.time;
    }
    node(string& id1, int& time1)
        : id(id1)
        , time(time1){};
};
int main(void)
{
    int N;
    cin >> N;

    while (N--) {
        int M;
        cin >> M;

        vector<node> record;
        while (M--) {
            int hour, minute, second;
            int time = 0;
            string id;
            cin >> id;
            //签到记录
            scanf("%d:%d:%d", &hour, &minute, &second);
            time = hour * 3600 + minute * 60 + second;
            record.push_back(node(id, time));

            //签退记录
            scanf("%d:%d:%d", &hour, &minute, &second);
            time = hour * 3600 + minute * 60 + second;
            record.push_back(node(id, time));
        }

        sort(record.begin(), record.end());

        cout << record[0].id << ' ' << record[record.size() - 1].id << endl;
    }
}
