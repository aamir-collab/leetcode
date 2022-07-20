class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string,int>m;
        int n = s.size();
        int count = 0;
        for(int i = 0; i<words.size(); i++){
            m[words[i]]++;
        }
        for(auto x: m){
            string p = x.first;
            int m = p.size();
            int start1 = 0;
            int start2 = 0;
            while(start1<n && start2<m){
                if(s[start1] == p[start2]){
                    start1++;start2++;
                }
                else{
                    start1++;
                }
            }
            if(start2 == m){
                count+=x.second;
            }
        }
        return count;
    }
};