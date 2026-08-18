class Solution {
public:
    bool check(vector<int>& nums) {
     // 1 2 3 4 5   A
    //      |
    //  3 4 5 1 2  B
    //   think of the drop the array is rotated and sorted there will
    // be only one drop

    int drop = 0; 
  int n = nums.size();
    for(int i = 0 ; i < nums.size() ; i++) {
        if(nums[i] > nums[(i+1) % n]){
            drop++;
        }

    }
    return drop<=1;
    }
};