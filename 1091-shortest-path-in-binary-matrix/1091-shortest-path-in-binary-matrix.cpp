class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        q.push({0,0});
        int n = grid.size();
         if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1) {
            return -1;
        }
        
        // Base case: For a 1x1 matrix where the cell is 0
        if (n == 1) {
            return 1;
        }
        

        vector<vector<int>>directions = {
        {-1,-1},  {-1,0}  ,{-1,1},
        {0,-1},             {0,1},
        {1,-1},   {1,0},    {1,1}
        };
        int currDist = 1;
        while(!q.empty()) {
            int size = q.size();

            while(size--) {
                auto [r,c] = q.front();
                q.pop();

                if(r == n-1 && c == n-1){
                    return currDist;
                }
                for(auto& dir : directions) {
                    int nextR = r + dir[0];
                    int nextC = c + dir[1];

                    if(nextR >= 0 && nextR < n && nextC >= 0 && nextC<n && grid[nextR][nextC] == 0) {
                        if(nextR == n-1 && nextC == n-1){
                            return currDist+1;
                        }
                        grid[nextR][nextC] = 1;
                        q.push({nextR,nextC});
                    }
                }
            }
            currDist++;
        }
    return -1;

    }
};