class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
     int oddcnt = 0 ;
     int result = 0;
     int prefixeven = 0 ;
     int l = 0, r = 0, n = nums.size();
     while( r < n) {
      if (nums[r] % 2) {
        oddcnt++;
        prefixeven = 0;
    }
       while( oddcnt == k) {
        prefixeven++;
        if(nums[l]%2) oddcnt--;
        l++;
       }
       result += prefixeven;
        r++;
     }  
     return result; 
    }
};