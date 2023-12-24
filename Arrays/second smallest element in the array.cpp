class Solution {
public:
	int secondSmallest(vector<int>& nums) {
		int max = nums[0];
		int n = nums.size();
		for (int  i = 0 ; i < n ; i++){
			if(nums[i]<max) max = nums[i];
		}
		int smin = INT_MAX;
		for (int i = 0; i < n; i++){
			if (nums[i] == max) continue;
			if (nums[i]< smin) smin = nums[i];
		}
		return smin;
		}
};