class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int mincost = prices[0];

        for(int i = 1 ; i<prices.size() ; i++)
        {
            mincost = min(mincost, prices[i]);
            maxprofit = max(maxprofit, prices[i] - mincost);
        }
        return maxprofit;
    }
};