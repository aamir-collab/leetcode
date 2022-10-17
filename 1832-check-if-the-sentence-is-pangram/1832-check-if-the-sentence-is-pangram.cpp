class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int>mp;
        for(auto x : sentence){
            mp[x]++;
        }
        for(char i = 'a'; i <= 'z'; i++){
            if(mp[i]==0){
                return false;
            }
        }
        return true;
        
    }
};