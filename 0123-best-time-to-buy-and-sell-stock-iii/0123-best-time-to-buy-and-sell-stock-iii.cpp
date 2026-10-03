#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int solve(int ind, int canBuy, int remTran, vector<int>& prices, vector<vector<vector<int>>>& dp) {
        // Base cases
        if (ind >= prices.size() || remTran == 0) return 0;
        
        // 1. Check if the value is already computed (Memoization)
        if (dp[ind][canBuy][remTran] != -1) return dp[ind][canBuy][remTran];
        
        if (canBuy) {
            // Fix: Removed quotes around -prices[ind]
            int buy = -prices[ind] + solve(ind + 1, 0, remTran, prices, dp);
            int skip = 0 + solve(ind + 1, 1, remTran, prices, dp);
            return dp[ind][canBuy][remTran] = max(buy, skip);
        } else {
            // Selling completes a transaction, so decrease remTran
            int sell = prices[ind] + solve(ind + 1, 1, remTran - 1, prices, dp);
            int skip = 0 + solve(ind + 1, 0, remTran, prices, dp);
            return dp[ind][canBuy][remTran] = max(sell, skip);
        }
    }

    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        
        // 3D DP Table initialized with -1
        // Size: prices.size() x 2 (canBuy: 0 or 1) x 3 (remTran: 0, 1, or 2)
        vector<vector<vector<int>>> dp(prices.size(), vector<vector<int>>(2, vector<int>(3, -1)));
        
        return solve(0, 1, 2, prices, dp);
    }
};
