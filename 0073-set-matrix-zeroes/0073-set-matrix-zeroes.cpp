class Solution {
public:
    void better(vector<vector<int>>& matrix)   {
         int m = matrix.size() ;
        int n = matrix[0].size(); 
        vector<int>row(m,0);
        vector<int>col(n,0);
        for(int i = 0; i<m; i++)
        {
            for(int j = 0 ; j<n;j++) {
                if(matrix[i][j] == 0 ){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        // for(auto x : row) cout<<x<<" ";
        // cout<<endl;
        // for(auto x: col) cout<<x<<" ";
        for(int i = 0 ;i<m;i++){
            for(int j = 0 ;j<n ;j++){
                if(row[i] == 1 || col[j] == 1 ){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    void brute(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0 ; i < m ; i++) {
            for(int j = 0 ;j<n ; j++)  {
                if(matrix[i][j] == 0) {
                    for(int row =0 ;row<m ; row++){
                        if(matrix[row][j] != 0){
                            matrix[row][j]=-1;
                        }
                    }
                    for(int col = 0 ; col<n ;col++) {
                        if(matrix[i][col] != 0){
                            matrix[i][col] =-1;
                        }
                    }
                }

            }

        }
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ;j<n; j++){
                if(matrix[i][j]==-1){
                    matrix[i][j]=0;
                }
            }
        }
    }
    void optimal(vector<vector<int>>& matrix)   {
        bool rowZero = false;
        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int i = 0 ;i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                if(i>0){
                    matrix[i][0] = 0;
                }
                else{
                    rowZero = true;
                }
                }
            }
        }
        for(int i =  1;i<m; i++ ){
            for(int j = 1;j<n;j++){
                if(matrix[0][j] == 0 || matrix[i][0]==0){
                    matrix[i][j] = 0 ;
                }
            }
        }
         if(matrix[0][0]==0){
            for(int i= 0 ;i<m ;i++){
                matrix[i][0]=0;
            }
        }
        if(rowZero == true){
            for(int j = 0 ; j<n ; j++){
                matrix[0][j]=0;
            }
        }
       
        
    }
    void setZeroes(vector<vector<int>>& matrix) {
    //    better(matrix);
        optimal(matrix);
    }
};