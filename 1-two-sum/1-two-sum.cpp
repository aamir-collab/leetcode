class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<long,int>mp;
        for(int i=0;i<nums.size();i++){
            long long left=target-nums[i];
            if(mp.find(left)!=mp.end())return{mp[left],i};
            mp[nums[i]]=i;
        }
        return {1,2};
    }
};