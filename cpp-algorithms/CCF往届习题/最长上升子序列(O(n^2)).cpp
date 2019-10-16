//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//	int lengthOfLIS(vector<int>& nums) {
//		if (nums.empty()) return 0;
//		vector<int> cnt(nums.size());
//		int i = 1;
//		cnt[0] = 1;
//		while (i<nums.size())
//		{
//			for (int j = i; j >=0 ; j--)
//			{
//				if (nums[i] > nums[j])
//				{
//					cnt[i] = max(cnt[i], cnt[j] + 1);
//				}
//				else if(nums[i]==nums[j]) cnt[i] = max(cnt[j], cnt[i]);
//				else cnt[i] = max(cnt[i], 1);
//			}
//			i++;
//		}
//		int max_num = 0;;
//		for (int i = 0; i < cnt.size(); i++)
//			if (max_num < cnt[i])
//				max_num = cnt[i];
//		return max_num;
//	}
//};