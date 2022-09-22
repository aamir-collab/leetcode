class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        stack<int>st;
        int n = s.length();
        int i = 0;
        while(i<n){
            if(s[i] == ' '){
                while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
                }
                 ans.push_back(' ');
            }
            else{
                st.push(s[i]);
            }
           i++;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};