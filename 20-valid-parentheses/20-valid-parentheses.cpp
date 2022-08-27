class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n = s.size();
        // bool flag = 0;
        for(int i = 0; i<n; i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if((s[i] == ')' && st.top() == '(') ||(s[i] == ']' &&                          st.top() == '[')||(s[i] == '}' && st.top() == '{')){
                    st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
            if(st.empty()){
                return true;
            }
        return false;
    }
};