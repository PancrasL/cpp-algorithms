//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int N;
//	
//	while (cin >> N)
//	{
//
//		vector<char> v(N);
//		for (int i = 0; i < N; i++)
//		{
//			int num;
//			cin >> num;
//			v[i] = (char)num;
//		}
//		for (char key = 'A'; key <= 'Z'; key++)
//		{
//			int i;
//			for (i = 0; i < v.size(); i++)
//			{
//				char val = key ^ v[i];
//				if (val >= 'A'&&val <= 'Z') continue;
//				else break;
//			}
//			if (i == v.size())
//			{
//				for (int i = 0; i < v.size(); i++)
//					putchar((key ^ v[i]));
//				cout << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}