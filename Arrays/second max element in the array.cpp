class Solution {
public:
	int secondLargest(vector<int>& nums) {
	int max = nums[0];
	int smax = INT_MIN;
	int n = nums.size();
	for (int i = 0; i < n; i++){
		if (nums[i]>max) max = nums[i];
		 if (nums[i] == smax) continue;
		 if (nums[i]>smax) smax = nums[i];
	}
	return smax;
	}
};