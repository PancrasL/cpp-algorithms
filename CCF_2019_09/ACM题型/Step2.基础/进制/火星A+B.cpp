#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
#define MAX 200
vector<int> prime;
vector<int> isPrime(MAX + 1, 1);

//筛法获取前25个素数
void getPrime()
{
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i + i; j <= MAX; j += i) {
                isPrime[j] = 0;
            }
            prime.push_back(i);
        }
    }
}
int main(void)
{
    getPrime();

    
}