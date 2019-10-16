#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(void)
{
    vector<vector<char> > matrix;
    int M, N;
    cin >> M >> N;
    matrix.resize(M);
    for (int i = 0; i < M; i++)
        matrix[i].resize(N);
    char c = 'A';
    int row1, row2, col1, col2;
    row1 = col1 = 0;
    row2 = M - 1;
    col2 = N - 1;
    while (true) {
        //最上方
        for (int j = col1; j <= col2; j++) {
            matrix[row1][j] = c;
            if (++c > 'Z')
                c = 'A';
        }
        row1++;
        if (row1 > row2)
            break;

        //最右方
        for (int i = row1; i <= row2; i++) {
            matrix[i][col2] = c;
            if (++c > 'Z')
                c = 'A';
        }
        col2--;
        if (col2 < col1)
            break;

        //最下方
        for (int j = col2; j >= col1; j--) {
            matrix[row2][j] = c;
            if (++c > 'Z')
                c = 'A';
        }
        row2--;
        if (row2 < row1)
            break;

        //最左方
        for (int i = row2; i >= row1; i--) {
            matrix[i][col1] = c;
            if (++c > 'Z')
                c = 'A';
        }
        col1++;
        if (col1 > col2)
            break;
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            cout << "   " << matrix[i][j];
        cout << endl;
    }
    return 0;
}