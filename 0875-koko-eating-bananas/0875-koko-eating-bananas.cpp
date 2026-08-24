class Solution {
public:
    long long calHours(vector<int>& piles,int speed){
        long long hours = 0;
        for(auto x: piles){
            
            hours  += ((long long)x + speed - 1) / speed;

        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e = *max_element(piles.begin(),piles.end());
        int k = e;
        while(s <= e){
            int speed = s + (e-s)/2;
            long long time = calHours(piles,speed);
            if(time <= h){
                k = speed;
                e = speed-1;
            }
            else{
                s = speed+1;
            }
        }
        return k;

    }
};