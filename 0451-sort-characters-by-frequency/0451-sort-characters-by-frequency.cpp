class Solution {
public:
    string optimal(string s){
        unordered_map<char,int>mpp;
        for(auto ch : s) mpp[ch]++;
        vector<vector<char>>bucket(s.length()+1);

        for(auto [ch,fq] : mpp){
       bucket[fq].push_back(ch);
        }
        string ans;
        for(int fq = bucket.size()-1; fq>=1;fq--){
            for(auto ch : bucket[fq]){
                ans.append(fq,ch);
            }
        }
        return ans;

    }
    string frequencySort(string s) {
        // unordered_map<char,int>mpp;
        // for(auto x:s){
        //     mpp[x]++;
        // }
        // vector<pair<char,int>>v(mpp.begin(),mpp.end());

        // sort(v.begin(),v.end(),[](auto &a,auto &b){
        //     return a.second>b.second;
        // });
        // string ans;
        // for(auto &x: v){
        //     ans.append(x.second,x.first);
        // }
        // return ans;
        return optimal(s);

    }
};