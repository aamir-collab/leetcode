class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto num:  nums)
            mp[num]++;
        int n = nums.size()/3;
        vector<int>ans;
        for(auto x: mp){
            if(x.second > n)
                ans.push_back(x.first);
        }
        return ans;
    }
};