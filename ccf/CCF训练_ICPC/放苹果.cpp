//
///*
//	��f(m,n)��ʾm��ƻ���ŵ�n��������
//	��n>mʱ����������Ϊ�գ�f(m,n)=f(m,m)
//	��������һ������Ϊ��ʱ��f1(m,n)=f(m,n-1)
//	���������Ӳ�Ϊ��ʱ:f2(m,n)=f(m-n,n)+f(m,n-1)
//*/
///* POJ1664 ��ƻ�� */
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
