class Solution {
public:
	int maxProfit(vector<int>& prices) {
	 int maxi = 0;
	 int mini = 100000;
	 int n = prices.size();
	   for(int i =0;i<n;i++){
		   mini = min(mini,prices[i]);
		   int profit = prices[i] - mini;
		   maxi = max(maxi,profit);
	   }
	   return maxi;
	}
};