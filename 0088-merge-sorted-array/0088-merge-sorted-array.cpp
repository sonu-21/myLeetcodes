class Solution {
public:
    void optimal(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i = m-1;
   int j = n-1;
   int k = m+n-1;

   while( i>=0 && j>=0)
   {
        if(nums1[i]>nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        }
        else{
            nums1[k] = nums2[j];
            j--;
        }
       k--;

   }
    while(j >= 0){
        nums1[k] = nums2[j];
        j--;
        k--;
    }

    
    }

    void better(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
       int i = m;
       int j = 0;

       while(i<nums1.size()) {
        nums1[i] = nums2[j];
        i++;
        j++;
       }

       sort(nums1.begin(),nums1.end());

    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        better(nums1,m,nums2,n);
    }
  
};