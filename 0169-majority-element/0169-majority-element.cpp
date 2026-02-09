class Solution {
public:
    int better(vector<int>& nums)   {
         unordered_map<int,int>mpp;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++) {
            mpp[nums[i]]++;
        }
        for(auto x : nums)  {
            if(mpp[x] > n/2) return x;
        }
        return 0;
    }
    int brute(vector<int>& nums)    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }

    int mooreAlgo(vector<int>& nums) {
        int elem = 0 ;
        int cnt = 0 ;
        int n = nums.size();
        for(int i = 0 ; i< n ; i++) {
            if(cnt == 0 ) {
                elem = nums[i];
                cnt++;
            }
            else if(elem != nums[i])    {
                cnt--;
            }
            else{
                cnt++;
            }
        }
        return elem;
    }
    int majorityElement(vector<int>& nums) {
    //    return brute(nums);
        return mooreAlgo(nums);
    }
};