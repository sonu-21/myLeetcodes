class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int cnt = 0 ;
     unordered_map<int,int>freq;
     freq[0] = 1;
    int preSum = 0;
     for( auto x : nums){
        preSum += x;

        if(freq.find(preSum-k)!=freq.end()){
            cnt = cnt + freq[preSum-k];
        }
        freq[preSum]++;
     } 
     return cnt;
    }
};