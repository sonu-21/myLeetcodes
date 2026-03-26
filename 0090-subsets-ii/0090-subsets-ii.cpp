class Solution {
public:
    void gen(int i,   set<vector<int>>&s, vector<int>& nums,vector<int>&ds ){
        if(i >= nums.size()){
            s.insert(ds);
            return;
        }
        ds.push_back(nums[i]);
        gen(i+1, s, nums, ds);
        ds.pop_back();
        gen(i+1, s, nums, ds);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<int>ds;
        gen(0,s,nums,ds);
            vector<vector<int>> v(s.begin(),s.end());
            return v;
    }
};