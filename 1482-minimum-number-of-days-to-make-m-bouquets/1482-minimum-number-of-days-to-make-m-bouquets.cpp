class Solution {
public:
    bool checkBouquets(vector<int>& bloomDay, int m, int k,int day){
        int cnt = 0 ; int pAns = 0 ;
        for(int i = 0 ; i < bloomDay.size() ;i++){
            if(bloomDay[i] <= day ){
                cnt++;
            }
            else{
                pAns = pAns + (cnt/k);
                cnt = 0 ; 

            }
        }
         pAns = pAns + (cnt/k);

         return (pAns>=m);
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int mini = *min_element(bloomDay.begin(),bloomDay.end());
        int maxi =  *max_element(bloomDay.begin(),bloomDay.end());
        if(1LL*m*k > bloomDay.size()) return -1;
        int result = -1;
       while(mini<=maxi){
        int mid = mini  + (maxi -  mini)/2;
        if(checkBouquets(bloomDay, m , k , mid)){
            result= mid;
            maxi = mid-1;
        }
        else{
            mini = mid  + 1 ;
        }
       }
        return result;
    }
};