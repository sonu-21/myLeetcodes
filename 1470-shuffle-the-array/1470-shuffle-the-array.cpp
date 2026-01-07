class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      vector<int>ans;
      int s = 0;
      int p = n;
      while(p<=nums.size()-1)
      {
        ans.push_back(nums[s]);
        ans.push_back(nums[p]);
        s++;
        p++;
      }
      return ans;
    }
};