class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int s = 0 ; 
         int e = nums.size()-1;
         while(s<e){
            if(nums[s]==0){
                 nums.erase(nums.begin()+s);
                nums.push_back(0);
                 e--;
            }
            else
            s++;
            
         }
    }

};