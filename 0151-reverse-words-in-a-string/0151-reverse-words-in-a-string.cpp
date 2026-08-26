class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string ans = "";
        stack<string>st;
        for(auto x  : s) {
            if(x != ' '){
                word += x;
            }
            else if(word!=""){
                st.push(word);
                word="";
            }
        }
       if(word!=""){
        st.push(word);
       }

       while(!st.empty()){
        ans+=st.top();
        ans+=" ";
        st.pop();
       }
        return ans.substr(0,ans.size()-1);
    }
};