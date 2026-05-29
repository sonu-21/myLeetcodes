class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int result = 0;
        int l = 0, r = 0;
        int window_sum = 0;
        int cntzero = 0;

        while( r < nums.size()){
            window_sum += nums[r];

            while( l<r && (nums[l] == 0 ||window_sum > goal)){
                if(nums[l] == 0){
                    cntzero++;
                }
                else{
                    cntzero = 0;
                }
                window_sum -= nums[l];
                l++;
            }
            if(window_sum == goal){
                result += 1+cntzero;
            }
            r++;
        }
        return result;
    }
};