///* POJ1017 ZOJ1307 UVA311 UVALive5526 Packets */
//
//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//
//const int SIX = 6;
//int orders[SIX + 1], sum;
//int r33[] = { 0, 5, 3, 1 };   // r33[i]��ʾ��������װ��i��3*3֮��ʣ��2��2��λ�м���
//
//int main()
//{
//	for (;;) {
//		sum = 0;
//		for (int i = 1; i <= SIX; i++) {
//			scanf("%d", &orders[i]);
//			sum += orders[i];
//		}
//		if (sum == 0)
//			break;
//
//		// �ȼ���6��6��5��5��4��4��3��3��Ҫ����������
//		sum = orders[6] + orders[5] + orders[4] + (orders[3] + 4 - 1) / 4;
//
//		// ����4��4��3��3����װ��󣬿����2��2�Ŀ�λ�м���
//		int r22 = orders[4] * 5 + r33[orders[3] % 4];
//
//		if (r22 < orders[2])
//			sum += (orders[2] - r22 + 9 - 1) / 9;   // 1�����װ��9��2��2
//
//		// ����5��5��4��4��3��3��2��2ȫ��װ��󣬿����1��1�Ŀ�λ�м���
//		int r11 = sum * 36 - orders[6] * 36 - orders[5] * 25 - orders[4] * 16 - orders[3] * 9 - orders[2] * 4;
//
//		if (r11 < orders[1])
//			sum += (orders[1] - r11 + 36 - 1) / 36;
//
//		printf("%d\n", sum);
//	}
//
//	return 0;
//}
