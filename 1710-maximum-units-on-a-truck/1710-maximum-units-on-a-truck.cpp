class Solution {
public:
    static bool func(vector<int> &a, vector<int> &b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), func);
        int ans = 0;
        for(auto baksa : boxTypes){
            int x = min(baksa[0], truckSize);
            ans += (baksa[1]*x);
            truckSize-=x;
            if(!truckSize)break;
        }
        return ans;
    }
};