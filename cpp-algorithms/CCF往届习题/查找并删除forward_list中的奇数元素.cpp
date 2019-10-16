//#include<forward_list>
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	forward_list<int> nums = { 1,2,3,4,5,6,7,8,9,10 };
//	forward_list<int>::iterator curr = nums.begin(), prev = nums.before_begin();
//	while (curr!=nums.end())
//	{
//		if (*curr % 2 == 1)
//			curr=nums.erase_after(prev);
//		else
//		{
//			curr++; prev++;
//		}
//	}
//	for (auto e : nums)
//		cout << e << endl;
//	system("pause");
//}