class Solution {
public:
    void sortColors(vector<int>& nums) {
        // 2 0 2 1 1 0
        int zero = 0, one = 0;
        int n = nums.size();
        for(int i =0 ; i < n ;i++) {
            if(nums[i] == 0) zero++;
            else if(nums[i] == 1 ) one++;
        }

        // int two = n - (zero+one);

        for(int i = 0; i<n ; i++) {
            if(zero>0){
                nums[i] = 0;
                zero--;
            }
            else if(one > 0){
                nums[i] = 1;
                one--;
            }
            else{
                nums[i] = 2;
            }
        }
    }
};