//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	char a[10];
//	scanf("%c-%c%c%c-%c%c%c%c%c-%c", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
//	/*����ʶ����*/
//	int num = 0;
//	for (int i = 0; i < 9; i++)
//	{
//		num += (a[i]-'0') * (i + 1);
//	}
//	num %= 11;
//	char key;
//	if (num == 10)
//	{
//		key = 'X';
//	}
//	else key = num + '0';
//	/*�ж�ʶ�����Ƿ���ȷ*/
//	if (a[9] == key)
//	{
//		cout << "Right" << endl;
//	}
//	else printf("%c-%c%c%c-%c%c%c%c%c-%c\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], key);
//	return 0;
//}