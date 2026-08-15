class Solution {
public:

    void dfs( vector<vector<int>>&adj, vector<bool>&visited,int node) {
          
          visited[node] = true;
          
          for(int i = 0 ; i<adj[node].size(); i++)
{
          int niegh = adj[node][i];
            if(!visited[niegh]){
                dfs(adj,visited, niegh);
            }
}

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>>adj(n);
        for(int i = 0 ; i <n ;i++) {
            for(int j = i+1 ; j<n ;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
       vector<bool>visited(n,0);

       int cnt = 0 ; 
       for(int i = 0 ; i< n ; i++) {
        if( !visited[i] ){
            cnt++;
            dfs(adj, visited, i);
        }
       }

       return cnt;
    }
};