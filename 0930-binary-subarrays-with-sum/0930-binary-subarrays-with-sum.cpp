class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       int cnt = 0 ;
     unordered_map<int,int>freq;
     freq[0] = 1;
    int preSum = 0;
     for( auto x : nums){
        preSum += x;

        if(freq.find(preSum-goal)!=freq.end()){
            cnt = cnt + freq[preSum-goal];
        }
        freq[preSum]++;
     } 
     return cnt;  
    }
};