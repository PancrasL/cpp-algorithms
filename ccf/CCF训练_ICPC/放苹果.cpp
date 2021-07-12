//
///*
//	设f(m,n)表示m个苹果放到n个盘子里
//	当n>m时，必有盘子为空，f(m,n)=f(m,m)
//	当至少有一个盘子为空时：f1(m,n)=f(m,n-1)
//	当所有盘子不为空时:f2(m,n)=f(m-n,n)+f(m,n-1)
//*/
///* POJ1664 放苹果 */
//
//#include <stdio.h>
//#include <string.h>
//
//#define N 10
//int a[N + 1][N + 1];
//
//int apple(int m, int n)
//{
//	if (a[m][n])
//		return a[m][n];
//	else {
//		if (m == 0 || n == 1)
//			return a[m][n] = 1;
//		else if (n > m)
//			return a[m][n] = apple(m, m);
//		else
//			return a[m][n] = apple(m - n, n) + apple(m, n - 1);
//	}
//}
//
//int main(void)
//{
//	memset(a, 0, sizeof(a));
//
//	int t, m, n;
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%d%d", &m, &n);
//
//		printf("%d\n", apple(m, n));
//	}
//
//	return 0;
//}
