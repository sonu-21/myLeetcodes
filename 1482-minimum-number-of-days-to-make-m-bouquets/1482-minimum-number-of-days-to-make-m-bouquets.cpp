class Solution {
public:
    long long helper(vector<int>& bloomDay, int k, int day) {
        long long b = 0;
        int cnt = 0;
        for(auto x : bloomDay) {
            if(x>day){
               cnt=0;
            }
            else{
                cnt++;
                if(cnt == k){
                    cnt = 0;
                    b++;
                }
            }
      
        }
          return b;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        // 1,10,3,10,2
        int s = *min_element(bloomDay.begin(),bloomDay.end());
        int e = *max_element(bloomDay.begin(),bloomDay.end());
        int ans = -1;
        while(s <= e){
            int mid = s + (e-s)/2;
            long long bouquet = helper(bloomDay,k,mid);
            if(bouquet >= m ){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};