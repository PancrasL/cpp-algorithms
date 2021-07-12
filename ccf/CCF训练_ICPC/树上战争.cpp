//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int N, M;
//	while (true)
//	{
//		cin >> N >> M;
//		if (N == 0 && M == 0) break;
//		vector<int> root(N + 1, -1);
//		for (int i = 1; i <= N-1; i++)
//		{
//			int A, B;
//			cin >> A >> B;
//			root[B] = A;
//		}
//		int lxh, pfz;
//		for (int i = 1; i <= M; i++)
//		{
//			cin >> lxh >> pfz;
//			while (true)
//			{
//				lxh = root[lxh];
//				if (lxh == -1) break;
//				pfz = root[pfz];
//				if (pfz == -1) break;
//			}
//			if (lxh == -1) cout << "lxh" << endl;
//			else cout << "pfz" << endl;
//		}
//	}
//}