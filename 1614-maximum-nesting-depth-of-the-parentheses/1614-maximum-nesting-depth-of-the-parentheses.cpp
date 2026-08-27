class Solution {
public:
    int maxDepth(string s) {
        int depth = 0 ;
        int cnt = 0;
        for(auto x : s) {
            if(x == '(') {
                cnt++;
                depth = max(cnt,depth);
            }
            else if(x==')') cnt--;

        }
        return depth;
    }
};