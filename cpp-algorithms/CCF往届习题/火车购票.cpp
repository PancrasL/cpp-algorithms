//#include<iostream>
//#include<vector>
//using namespace std;
//struct Line {//��ʾһ����λ
//	int num;//��ʾ������λʣ�µĿ���λ��
//	bool sit[6];//��ʶ��ռ�õ���λ
//	Line()
//	{
//		num = 5;
//		for (int i = 1; i <= 5; i++)
//			sit[i] = 0;
//	}
//};
//vector<Line> row(20);
//int main(void)
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int p;
//		cin >> p;
//		/*�ж��ܷ񰲷���ͬһ��*/
//		int i;
//		for (i = 0; i < row.size(); i++)
//		{
//			if (p <= row[i].num) break;//���Էŵ���i��
//		}
//		if (i != row.size())//���Է��䵽ͬһ��
//		{
//			for (int j = 1; j <= 5; j++)
//			{
//				if (!row[i].sit[j])
//				{
//					row[i].num--;
//					row[i].sit[j] = true;
//					cout << i * 5 + j << ' ';
//					if (--p == 0) break;
//				}
//			}
//			cout << endl;
//		}
//		else//���ܷ��䵽ͬһ��
//		{
//			for (int i = 0; i < row.size(); i++)
//			{
//				for (int j = 1; j <= 5; j++)
//				{
//					if (!row[i].sit[j])
//					{
//						row[i].num--;
//						row[i].sit[j] = true;
//						cout << i * 5 + j << ' ';
//						if (--p == 0) break;
//					}
//				}
//				if (p == 0) break;//��λ�������
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}