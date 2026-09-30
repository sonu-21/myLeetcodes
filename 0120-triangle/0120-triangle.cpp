class Solution {
public:
    int calc(vector<vector<int>>& triangle,int size,int r ,int c,vector<vector<int>>&dp){
        if( r == size-1 ) return triangle[size-1][c];

        if(dp[r][c] != -1e9) return dp[r][c];

        int down = triangle[r][c]+calc(triangle,size,r+1,c,dp);
        int rDia = triangle[r][c] + calc(triangle,size,r+1,c+1,dp);

        return  dp[r][c] =  min(down,rDia);


      

    }
    int minimumTotal(vector<vector<int>>& triangle) {

        int n = triangle.size();

        vector<vector<int>>dp(n,vector<int>(n,-1e9));
        
       return calc(triangle,n,0,0,dp);



    }
};