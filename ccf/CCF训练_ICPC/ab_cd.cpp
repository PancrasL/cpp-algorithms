//#include<iostream>
//#include<algorithm>
//using namespace std;
//int GreatestCommonDivisor(int a, int b)//��a��b���������
//{
//	int t;
//	if (a < b)
//	{
//		t = a; a = b; b = t;
//	}
//	while (b != 0)
//	{
//		t = a % b; a = b; b = t;
//	}
//	return a;
//}
//int LeastCommonMultiple(int a, int b,int c)//c��a��b���������
//{
//	int t = a * b / c;
//	return t;
//}
//int main(void)
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int a, b, c, d;
//		cin >> a >> b >> c >> d;
//		int num1;//�������
//		int num2;//��С������
//		num2 = LeastCommonMultiple(b, d, GreatestCommonDivisor(b, d));
//		a = num2 / b * a; b = num2;
//		c = num2 / d * c; d = num2;//ͨ��
//		int e, f;
//		num1 = GreatestCommonDivisor(a + c, b);
//		e = (a + c) / num1; f = b / num1;
//		cout << e << ' ' << f << endl;
//	}
//}