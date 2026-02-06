class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int n = nums.size();
        int s = 0 ;
        int e = n-k-1 ;
        while(s<e) {
            swap(nums[s],nums[e]);
            s++;
            e--;
        }
         e = n-1;
        s = n-k;

        while(s<=e){
          swap(nums[s],nums[e]);
          s++;
          e--;
        }
        s= 0;
        e = nums.size()-1;
        while(s<=e) {
            swap(nums[s],nums[e]);
            s++;
            e--;
        }
    }
};