#include <iostream>
#include <vector>
using namespace std;
/***** Begin *****/
int main()
{
	int n;
	cin >> n;
	vector<long long> num(n);
	num[0] = 0;
	num[1] = 1;
	for (int i = 2; i <= n; i++)
		num[i] = num[i - 1] + num[i - 2];
	return 0;
}
/***** End *****/