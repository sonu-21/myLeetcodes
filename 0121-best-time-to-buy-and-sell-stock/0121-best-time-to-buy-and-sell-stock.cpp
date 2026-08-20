class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l =0 , r = 0;
        int n = prices.size();

        int maxProfit = 0;
         int profit = 0 ;
        while( r<n ){
           profit = prices[r]-prices[l];
            if(profit < 0 ){
                l = r ;
            }
            else if(profit > 0){
                maxProfit = max(maxProfit,profit);
            }
            r++;

        }
    return maxProfit;
    }
};