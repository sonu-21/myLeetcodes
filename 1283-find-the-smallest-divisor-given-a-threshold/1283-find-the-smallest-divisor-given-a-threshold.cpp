class Solution {
public:
    int check(vector<int>& nums, int d ){
        int sum = 0;
        for(auto x: nums)   {
            sum += (x+d-1)/d;
        }
       return sum; 
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = *max_element(nums.begin(),nums.end());
         int s = 1 ;
            while(s<=maxi){
                int mid = s+(maxi-s)/2;
                if(check(nums,mid)<=threshold)
                {
                   maxi = mid -1;
                    
                }
                else{
                    s = mid + 1;
                }
            }
       
        return s;
    }
};