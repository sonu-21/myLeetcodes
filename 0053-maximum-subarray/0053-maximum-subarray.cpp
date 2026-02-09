class Solution {
public:
    int brute(vector<int>& nums)   {
          int ans = INT_MIN;
        for(int i = 0 ; i<nums.size() ; i++)    {
             int sum = 0 ;
            for(int j = i ; j<nums.size() ; j++)    {
                sum = sum+nums[j];
                 ans = max(ans,sum);
            }
           
        
        }
        return ans;
    }
    int better(vector<int>& nums)   {
       
        int r = 0 ;
        int sum = 0 ;
        int maxSum = INT_MIN ;
        int n = nums.size();
            while(r<n)  {
                sum = sum+nums[r];
                if(sum>maxSum){
                    maxSum = sum;
                
                    }
                    if(sum<0){
                
                sum = 0;
                }
        r++;
            }
            return maxSum;
    }
    int maxSubArray(vector<int>& nums) {
       
      return better(nums);
        
    }
};