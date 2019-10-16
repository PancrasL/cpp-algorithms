#include <iostream>
#include <stack>
#include <stdio.h>
#include <string>
#include <vector>
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
    while (true) {
        vector<int> A, B;
        int num;
        char c;

        //输入A
        while (true) {
            scanf("%d%c", &num, &c);
            A.push_back(num);
            if (c == ' ')
                break;
        }

        //输入B
        while (true) {
            scanf("%d%c", &num, &c);
            B.push_back(num);
            if (c == '\n')
                break;
        }

        //判断退出
        if (A.size() == 1 && B.size() == 1 && A[0] == 0 && B[0] == 0)
            break;

        //保证A短B长
        if (A.size() > B.size())
            swap(A, B);

        int sum, carry;
        stack<int> ans;
        int indexA, indexB, indexPrime;

        indexA = A.size() - 1;
        indexB = B.size() - 1;
        indexPrime = 0;
        carry = 0;
        while (indexA >= 0) {
            sum = A[indexA] + B[indexB] + carry;

            if (sum >= prime[indexPrime]) {
                carry = 1;
                sum -= prime[indexPrime];
                ans.push(sum);
            } else {
                carry = 0;
                ans.push(sum);
            }
            indexA--;
            indexB--;
            indexPrime++;
        }
        while (indexB >= 0) {
            sum = B[indexB] + carry;
            if (sum >= prime[indexPrime]) {
                carry = 1;
                sum -= prime[indexPrime];
                ans.push(sum);
            } else {
                carry = 0;
                ans.push(sum);
            }
            indexB--;
            indexPrime++;
        }
        if (carry)
            ans.push(1);
        cout << ans.top();
        ans.pop();
        while (!ans.empty()) {
            cout << ',' << ans.top();
            ans.pop();
        }
        cout<<endl;
    }

    return 0;
}