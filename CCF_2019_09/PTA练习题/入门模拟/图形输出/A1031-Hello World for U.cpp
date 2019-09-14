//找规律输出
#include <iostream>
#include <string>
using namespace std;
char matrix[100][100];
int main(void)
{
    string line;
    cin >> line;
    int len = line.size();
    int height = (len + 2) / 3;
    int wide = len + 2 - 2 * height;
    for (int i = 0; i <= height; i++) {
        for (int j = 0; j <= wide; j++)
            matrix[i][j] = ' ';
    }
    int index = 0;
    for (int i = 0; i < height; i++) {
        matrix[i][0] = line[index++];
    }
    index--;
    for (int j = 0; j < wide; j++) {
        matrix[height - 1][j] = line[index++];
    }
    index--;
    for (int i = height - 1; i >= 0; i--) {
        matrix[i][wide - 1] = line[index++];
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < wide; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}