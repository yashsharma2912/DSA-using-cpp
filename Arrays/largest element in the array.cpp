class Solution {
    public:
   int findLargestElement(vector<int>& nums) {
     // initially max will start from arr[0]
     int max =nums[0];
     // i (iterator) will start from 1 AND goes till last element of an array
     for(int i=1;i<nums.size();i++){
          // if current position is greater than max then max will become arr[i] and iterator will increase
       if(nums[i]>max){
          max = nums[i];
       }
     }
       return max;
   }
};