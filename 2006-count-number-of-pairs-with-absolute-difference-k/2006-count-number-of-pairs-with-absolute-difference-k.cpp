class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        int count=0;
        for(int i=0;i<nums.size();i++){
           count+=map[nums[i]+k] + map[nums[i]-k];
           map[nums[i]]++;
       }
        return count;
    } 
    
};