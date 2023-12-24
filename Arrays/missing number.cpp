class Solution {
public:
	int missingNumber(vector<int>& nums) {
	  int n = nums.size();
	  for(int i =0; i<n ; i++){
		  if(nums[i] != i){
			  if(nums[i] == n) continue;
			  swap (nums[nums[i]],nums[i]);
			  i--;
		  }
	  }
	  for(int i =0;i<n;i++){
		  if(nums[i] != i) return i;
	  }
	  return n;
	}
};