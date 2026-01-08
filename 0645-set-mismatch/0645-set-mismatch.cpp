class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans(2);
         vector<int>mpp(nums.size()+1);

        for(int i = 0 ; i < nums.size() ; i++ )
        {
            mpp[nums[i]]++;
        }

        for(int i = 1 ; i <= nums.size() ;i++ )
        {
          if(mpp[i] == 2) ans[0] = i;
          if(mpp[i] == 0 ) ans[1] = i;
        }

       
    return ans;

    }
};