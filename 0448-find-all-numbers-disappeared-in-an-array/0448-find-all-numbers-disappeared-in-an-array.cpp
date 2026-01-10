class Solution {
public:

//    vector<int> brute(vector<int>& nums) {
//        vector<int>ans;
//        vector<int>freq(nums.size()+1,0);

//        for(int i = 0 ;i < nums.size() ; i++)
//        {
//            freq[nums[i]]++;
//        }


//        for(int i=1;i<=nums.size();i++)
//        {
//             if(freq[i] == 0){
//                 ans.push_back(i);
//             }
//        }
        
    
//        return ans;
//     }

// optimal
    //  vector<int> optimal(vector<int>& nums)
    //  {
      
   
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    //   return brute(nums);
      int n = nums.size();
        vector<int>ans;

        for(int i=0;i<n;i++)
        {
            int index = abs(abs(nums[i])-1);
            nums[index] = -1*abs(nums[index]);
        }

        for(int i = 0 ;  i < n ; i++ )
        {
            if(nums[i] > 0 )
            {
                ans.push_back(i+1);
            }
        }
        return ans;
     }

        


};