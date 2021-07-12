//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int firstNum, secondNum;
//	
//	while (cin >> firstNum >> secondNum) {
//		try {
//			if (secondNum != 0)
//				cout << firstNum / secondNum << endl;
//			else
//				throw runtime_error("除数不能为0\n");
//		}
//		catch (runtime_error err) {
//			cout << err.what()
//				<< "Try again? Y or N" << endl;
//			char option;
//			cin >> option;
//			if (option == 'N')
//				break;
//		}
//	}
//	system("pause");
//}