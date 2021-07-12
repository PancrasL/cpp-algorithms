///* POJ1017 ZOJ1307 UVA311 UVALive5526 Packets */
//
//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//
//const int SIX = 6;
//int orders[SIX + 1], sum;
//int r33[] = { 0, 5, 3, 1 };   // r33[i]表示，箱子中装入i个3*3之后，剩余2×2空位有几个
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
//		// 先计算6×6、5×5、4×4和3×3需要的箱子数量
//		sum = orders[6] + orders[5] + orders[4] + (orders[3] + 4 - 1) / 4;
//
//		// 计算4×4和3×3箱子装箱后，空余的2×2的空位有几个
//		int r22 = orders[4] * 5 + r33[orders[3] % 4];
//
//		if (r22 < orders[2])
//			sum += (orders[2] - r22 + 9 - 1) / 9;   // 1箱可以装入9个2×2
//
//		// 计算5×5、4×4、3×3和2×2全部装箱后，空余的1×1的空位有几个
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
