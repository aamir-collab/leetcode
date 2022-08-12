class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int ans = INT_MIN;
        int apli = values[0]+0;
        for(int j = 1; j<n; j++){
            ans = max(ans, apli+values[j]-j);
            apli = max(apli, values[j]+j);
        }
        return ans;
    }
};