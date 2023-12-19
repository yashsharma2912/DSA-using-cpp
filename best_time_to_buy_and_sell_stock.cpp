class Solution {
public:
	int maxProfit(vector<int>& prices) {
	 // initially profit will be 0
	 int maxi = 0;
	 // minimum profit should be stay in constrain range which is 10 power 4
	 int mini = 100000;
	 // we declared n to get access of an array index
	 int n = prices.size();
	   for(int i =0;i<n;i++){

		   // mini will get minimum between mini and prices[i] which is declared array
		   mini = min(mini,prices[i]);
		   // profit means the difference between minimum and prices[i]
		   int profit = prices[i] - mini;
		   // once we get profit then we can find max which means max between maxi and profit
		   maxi = max(maxi,profit);
	  
	   }
	   return maxi;
	}
};