//两次翻转，reverse()
#include<algorithm>
#include<vector>
#include<stdio.h>
using namespace std;
int main(void)
{
    int N, M;
    scanf("%d %d", &N,&M);

    M = M%N;
    vector<int> matrix(N);
    for(int i=0;i<N;i++){
        scanf("%d", &matrix[i]);
    }

    reverse(matrix.begin(), matrix.begin()+N-M);
    reverse(matrix.begin()+N-M,matrix.end());
    reverse(matrix.begin(), matrix.end());

    printf("%d", matrix[0]);
    for(int i=1;i<N;i++)
        printf(" %d", matrix[i]);
    printf("\n");

    return 0;
        
}