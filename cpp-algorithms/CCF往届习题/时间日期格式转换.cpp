//#include<stdio.h>
//int main(void)
//{
//	int year, month, day, t1, t2, t3;
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%d/%d/%d-%d:%d:%d", &year, &month, &day, &t1, &t2, &t3);
//		if (t1 >= 12)
//		{
//			t1 = t1 > 12 ? t1 - 12 : t1;
//			printf("%02d/%02d/%04d-%02d:%02d:%02dpm\n", month, day, year, t1, t2, t3);
//		}
//		else
//		{
//			if (t1 == 0) t1 = 12;
//			printf("%02d/%02d/%04d-%02d:%02d:%02dam\n", month, day, year, t1, t2, t3);
//		}
//	}
//	return 0;
//}