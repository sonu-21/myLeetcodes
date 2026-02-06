class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int flag = 0;
        // if(nums.size()==1) return 1;
        for(int i = 1 ; i<nums.size() ;i++) {
            if(nums[flag] != nums[i]) 
                swap(nums[++flag],nums[i]);
       
        }
        return flag+1;
    }
};