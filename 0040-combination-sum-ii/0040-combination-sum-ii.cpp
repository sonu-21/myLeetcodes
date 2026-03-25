class Solution {
public:
void check(int i ,vector<int>& can, int target, vector<vector<int>>&ans,vector<int>&ds ){
    if(target == 0) {
        ans.push_back(ds);
        return;
    }
    for (int ind= i; ind < can.size(); ind++) {
            // 🔥 skip duplicates
            if (ind > i && can[ind] == can[ind - 1]) continue;

            if (can[ind] > target) break;

            ds.push_back(can[ind]);
            check(ind + 1, can, target - can[ind], ans, ds);
            ds.pop_back();
    
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

      vector<vector<int>>ans;
      vector<int>ds;

      check(0,candidates, target, ans, ds);
      return ans;

    }
};