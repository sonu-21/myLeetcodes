class Solution {
public:
    int checkDays(vector<int>& weights,int mini){
        int sum = 0;
        int d = 1;
        for(auto x:weights){
            if(sum+x>mini){
                 d++;
                sum = x;
            }
            else{
                sum+=x;
            }  
        }
        return d;
    } 
    int shipWithinDays(vector<int>& weights, int days) {
       int maxi = *max_element(weights.begin(),weights.end());
       int sum = 0 ;
       for(auto x : weights) sum+=x;
       int ans = sum;
      while(maxi<=sum){
        int mid = maxi+(sum-maxi)/2;
        if(checkDays(weights,mid)<=days){
            ans = mid;
            sum = mid-1;
        }
        else{
            maxi  = mid+1; 
        }
      }
       return ans;
    }
};