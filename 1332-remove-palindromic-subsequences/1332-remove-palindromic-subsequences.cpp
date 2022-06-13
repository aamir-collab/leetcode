class Solution {
public:
    int removePalindromeSub(string s) {
        if(s == " "){
            return 0;
        }
        int ans = 0;
        
        if(isPalin(s)){
            ans = 1;
        }
        else{
            ans = 2;
        }
        return ans;
    }
    bool isPalin(string s){
        int l = 0;
        int r = s.length()-1;
        while(l<=r){
            if(s[l] != s[r]){
             return false;
            }
            l++;
            r--;
        }
        return true;
    }
};