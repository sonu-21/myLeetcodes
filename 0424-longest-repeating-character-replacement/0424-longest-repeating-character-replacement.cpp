class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen = 0 ;
        int l = 0 , r= 0;
        vector<int>freq(26,0);
        int maxfreq = 0;
        int n = s.size();
        while(r<n){
            freq[s[r]-'A']++;
            maxfreq = max(maxfreq,freq[s[r]-'A']);
            int len = r-l+1;
            int rep = len-maxfreq;
            if(rep<=k){
                maxlen = max(maxlen,len);
            }
            else{
                freq[s[l]-'A']--;
                l++;
            }
            r++;
        }
        return maxlen;
    }
};