class Solution {
public:
	int subtractProductAndSum(int n) {
       int sum = 0;
       int prod = 1;
       while(n>0){
        // last digit
           int ld = n % 10;
           sum += ld;
           prod *= ld;
           n = n/10;
       }
       return prod - sum;
       }
};

