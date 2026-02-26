class Solution {
public:
    string first(vector<string>& strs){
         string prefix = strs[0];
        if(strs.size()==0) return "";
        for( int x = 1;x<strs.size() ;x++){
            string str = strs[x];
            while(str.find(prefix)!=0){
                prefix = prefix.substr(0,prefix.length()-1);
                if(prefix.empty()) return "";
            }

        }
        return prefix;
    }
    string longestCommonPrefix(vector<string>& strs) {
    //    return first(strs);
            sort(strs.begin(),strs.end());
            string ans = "";
             string first = strs[0];
             string last = strs[strs.size()-1];
             for(int i = 0 ; i<first.size();i++){
                if(first[i]==last[i]){
                    ans+=first[i];
                }
                else{
                    return ans;
                }
             }
             return ans;
    }
};