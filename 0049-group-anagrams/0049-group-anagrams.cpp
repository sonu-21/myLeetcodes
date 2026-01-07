class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        vector<vector<string>> ans;
        for(auto str : strs)
        {
            string s = str;
            sort(s.begin(),s.end());
            mpp[s].push_back(str);
        }

        for(auto i:mpp)
        {
            ans.push_back(i.second);
        }

        return ans;
    
    }
};