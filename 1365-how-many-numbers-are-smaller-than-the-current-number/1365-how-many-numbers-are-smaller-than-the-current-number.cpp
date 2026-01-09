class Solution {
public:
    vector<int> brute(vector<int>& nums) {
        vector<int>ans ;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        int cnt = 0;

        for(int j = 0 ; j < nums.size() ;j++)
        {
            if(nums[i] > nums[j])
            {
                cnt++;
            }
        }
        ans.push_back(cnt);
    }

    return ans;
    }

    // better

  

    vector<int>optimal(vector<int>&nums){

        vector<int>freq(101,0);
        vector<int>prefixSum(101,0);
        vector<int>ans(nums.size());
        
        for(int i=0 ;i < nums.size() ; i++)
        {
            freq[nums[i]]++;
        }

        prefixSum[0] = freq[0];

        for(int i = 1  ; i < freq.size() ; i++){
            prefixSum[i] = prefixSum[i-1] + freq[i];  
        }

        for(int i=0 ;i < nums.size() ; i++)
        {
            if(nums[i] == 0)
                ans[i] = 0;
            else
                ans[i] = prefixSum[nums[i]-1];
        }
        return ans;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // return brute(nums);
        return optimal(nums);
    }
};