class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bag = 0;
        int n = nums.size();
        int maxsum = INT_MIN;
         for (int i = 0; i < n ; i++){
             bag += nums[i]; 
             if (bag > maxsum) {
                 maxsum = bag;
             } if (bag <0) bag = 0;
         }
         return maxsum;
    }
};