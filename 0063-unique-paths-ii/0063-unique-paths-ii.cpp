class Solution {
public:
    int cntPaths(int i , int j , int m ,int n , vector<vector<int>>& Grid,vector<vector<int>>&dp) {

        if(i == m-1 && j == n-1) return 1;

        if( i < 0 || i>=m || j<0 || j>=n || Grid[i][j] == 1) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        int leftCnt = cntPaths(i,j+1,m,n,Grid,dp);
        int rightCnt = cntPaths(i+1,j,m,n,Grid,dp);

        return dp[i][j] =  leftCnt + rightCnt;



    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        if(obstacleGrid[m-1][n-1] == 1) return 0;
        vector<vector<int>>dp(m,vector<int>(n,-1));



        return cntPaths(0,0,m,n,obstacleGrid,dp);
        
    }
};