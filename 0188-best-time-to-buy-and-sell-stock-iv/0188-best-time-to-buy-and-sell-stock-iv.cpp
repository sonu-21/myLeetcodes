class Solution {
public:
    // int solve(int k ,int ind , int canBuy, vector<int>&prices,vector<vector<vector<int>>>&dp) {
    //     if( ind >= prices.size() || k==0) return 0;

    //     if(dp[ind][k][canBuy] != -1) return dp[ind][k][canBuy];

    //     if(canBuy) 
    //     {
    //         int buy = -prices[ind] + solve(k,ind+1, 0 ,  prices,dp);
    //         int skip = solve(k,ind+1, 1, prices,dp);
    //         return dp[ind][k][canBuy] = max(buy,skip);
    //     }

    //     int sell = prices[ind] + solve(k-1, ind+1, 1, prices,dp);
    //     int hold = solve(k, ind+1, 0 , prices,dp);
    //     return  dp[ind][k][canBuy] = max(sell,hold);

    // }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
          if (n == 0 || k == 0) return 0;
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));

        for(int ind = n-1 ; ind >= 0 ; ind--){
            for(int buy = 0 ; buy <=1; buy++) {
                for(int cap = 1 ; cap <= k ; cap++) {
        if(buy) 
        {
            dp[ind][buy][cap] = max(-prices[ind]+dp[ind+1][0][cap],
                                    0 + dp[ind+1][1][cap]);
        }

        else{
            dp[ind][buy][cap] = max(prices[ind] + dp[ind+1][1][cap-1],
                                    dp[ind+1][0][cap]);
        }

                }
            }
        }
    return dp[0][1][k];
        
    }
};