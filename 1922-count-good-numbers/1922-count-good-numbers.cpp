class Solution {
public:
    long long m = 1e9+7;
   long long findPower(int a, long long b){
        if(b == 0) return 1;
       long long half = findPower(a,b/2)%m;
       long long result = (half*half)%m;
       if(b%2==1){
        result = (result*a)%m;
       }
       return result;
    }
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = n/2;
        return (findPower(5,even)*findPower(4,odd))%m;
    }
};