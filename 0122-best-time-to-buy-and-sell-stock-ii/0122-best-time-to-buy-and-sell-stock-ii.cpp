class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int a = prices[0];

        int r = 1, n = prices.size();
        int maxP =  0;
        while(r < n) {

            if( prices[r] > a) {
                maxP += prices[r]-a;
            }
             a = prices[r];


            r++;
        }
        return maxP;
    }
};