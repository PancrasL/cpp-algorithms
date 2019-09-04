#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
void printAns(const set<int>& s)
{
    if (s.empty()) {
        cout << "Not Found" << endl;
        return;
    }
    set<int>::iterator it = s.begin();
    bool first = true;
    while (it != s.end()) {
        printf("%07d\n", *it);
        it++;
    }
}
int main(void)
{
    int N;
    scanf("%d%*c", &N);

    int id;
    string title, author, key, publisher, year;
    map<string, set<int> > titleMp;
    map<string, set<int> > authorMp;
    map<string, set<int> > keywordMp;
    map<string, set<int> > publisherMp;
    map<string, set<int> > yearMp;
    //处理输入
    for (int i = 0; i < N; i++) {
        //id
        scanf("%d", &id);
        getchar();
        
        //书名
        getline(cin, title);
        titleMp[title].insert(id);

        //作者
        getline(cin, author);
        authorMp[author].insert(id);

        //关键字
        string line;
        getline(cin, line);
        istringstream inStr(line);
        while (inStr >> key) {
            keywordMp[key].insert(id);
        }

        //出版社
        getline(cin, publisher);
        publisherMp[publisher].insert(id);

        //出版日期
        getline(cin, year);
        yearMp[year].insert(id);
    }

    //查询
    int M;
    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        int opt;
        string s;
        scanf("%d: ", &opt);
        getline(cin, s);
        printf("%d: %s\n", opt, s.c_str());
        switch (opt) {
        case 1: //书名
            printAns(titleMp[s]);
            break;
        case 2: //作者
            printAns(authorMp[s]);
            break;
        case 3: //关键字
            printAns(keywordMp[s]);
            break;
        case 4: //出版社
            printAns(publisherMp[s]);
            break;
        case 5: //出版日期
            printAns(yearMp[s]);
            break;
        default:
            break;
        }
    }
}