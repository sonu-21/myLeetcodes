class Solution {
public:
    bool dfs( int node,vector<vector<int>>& adj, vector<int>&visited,stack<int>&st){
      visited[node] = 1;

        for(auto it : adj[node]){
            if(visited[it] == 0)
            {
                if(dfs(it,adj,visited,st)) return true;
            }

            else if(visited[it] == 1) return true;
            
        }
        visited[node] = 2;
        st.push(node);
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);

        for(auto it : prerequisites) {
            adj[it[1]].push_back(it[0]);
        }
        vector<int>visited(numCourses,0);
        stack<int>st;
        for(int i = 0 ; i<numCourses ;i++){
            if(visited[i] == 0){
                if(dfs(i,adj,visited,st)) return {};
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};