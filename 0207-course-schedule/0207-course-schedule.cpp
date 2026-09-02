class Solution {
public:
    bool dfs(int course ,vector<vector<int>>& adj, vector<int>&state){

        if(state[course] == 1) return false;
        if(state[course] == 2) return true;

        state[course] = 1;

        for(auto x  : adj[course]){
            if(!dfs(x, adj, state))
            return false;
        }
        state[course]=2;
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>>adj(numCourses);
        

        for(auto pre : prerequisites) {
            adj[pre[1]].push_back(pre[0]);
        }
        vector<int>state(numCourses,0);

        for(int course=0 ; course<numCourses ;course++) {
            if(!dfs(course, adj, state))
                return false;
        }

        return true;
    }
};