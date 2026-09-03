class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        typedef pair<int,int>P;
        vector<vector<int>>directions{
            {-1,0},
        {0,-1}    ,{0,1},
             {1,0}
        };
        queue<P>q;

        for(int i = 0 ; i<mat.size(); i++) {
            for(int j = 0 ; j<mat[0].size();j++){
                if(mat[i][j] == 0){
                    q.push({i,j});
                }
                else mat[i][j]=-1;
            }
        }

      
        while(!q.empty()) {
            int n = q.size();
            while(n--){
                P curr = q.front();
                q.pop();
                int i  = curr.first;
                int j = curr.second;

                for(auto &dir : directions) {
                    int new_i =i+dir[0];
                    int new_j = j + dir[1];

                   if(new_i >=0 && new_i<mat.size() && new_j>=0 && new_j<mat[0].size()&& mat[new_i][new_j] == -1){
                    mat[new_i][new_j] = mat[i][j]+1;
                    q.push({new_i,new_j});
                   }
                }
            }
        }
        return mat;
    }
};