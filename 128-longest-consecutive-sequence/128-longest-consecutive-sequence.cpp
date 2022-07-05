class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(auto n: nums){
            s.insert(n);
        }
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            if(s.find(nums[i]-1)!=s.end()){
                continue;
            }
            else{
                int curr = nums[i];
                int streak = 0;
                while(s.find(curr)!=s.end()){
                    streak++;
                    curr++;
                }
                ans = max(ans,streak);
            }
            
        }
        return ans;
    }
};