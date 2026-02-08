class Solution {
public:
    void brute(vector<int>& nums)   {
          int one = 0 ;
        int zero = 0 ;
        
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] == 0){
                zero++;
            }
            else if(nums[i] == 1){
                one++;
            }
        }
        for(int i = 0 ;i<nums.size() ; i++) {
            if(zero>0) {
                nums[i] = 0;
                zero--;
            }
            else if(one>0) {
                nums[i] = 1;
                one--;
            }
            else{
                nums[i] = 2;
            }
        }
    }
    void optimal(vector<int>& nums) {
            int s = 0 ;
            int e = nums.size()-1;
            int mid = 0;
            while(mid <= e){
                if(nums[mid] == 0) {
                    swap(nums[mid],nums[s]);
                    s++;
                    mid++;
                }
                else if(nums[mid] == 2) {
                    swap(nums[mid],nums[e]);
                    e--;
                }
                else{
                    mid++;
                }
            }
    }
    void sortColors(vector<int>& nums) {
    //    brute(nums);
            optimal(nums);

    }
};