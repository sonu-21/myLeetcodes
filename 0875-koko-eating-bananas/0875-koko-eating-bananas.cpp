class Solution {
public:
     long long calculateHours(vector<int>& piles, int k){
        long long hours = 0;
        for(int x : piles){
            hours += (long long)(x + k - 1) / k;
        }
        return hours;
     }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxEle = *max_element(piles.begin(),piles.end()) ;
        int low = 1, high = maxEle;

        while(low <= high){
            int mid = low + (high-low)/2;
             long long reqHours = calculateHours(piles,mid);
            if(reqHours<=h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
            
        }


       return low;
    }
};