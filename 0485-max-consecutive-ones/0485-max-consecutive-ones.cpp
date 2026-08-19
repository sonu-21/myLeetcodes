class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // 1)  1 1 0 1 1 1  maxcnt = 0 , cnt = 0
        //     |                   =  1 , cnt = 1 (maxcnt = max(maxcnt,cnt))
        //       |                  = 2 , cnt = 2 
        //         |                = 2, cnt = 0 
        int maxcnt = 0, cnt =0;
        for(int i=0; i<nums.size() ;i++) {
            if(nums[i] != 0){
                cnt++;
                maxcnt = max(maxcnt,cnt);
            }
            else{
               cnt = 0 ; 
            }
        }
        return maxcnt;
    }
};