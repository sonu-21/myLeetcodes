class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int acc = nums[0];
        vector<int>ans;
          ans.push_back(acc);
        for(int i = 1; i < nums.size() ; i++) {
           
            acc = acc + nums[i];
             ans.push_back(acc);

        }
        return ans;
    }
};