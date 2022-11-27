class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min = INT_MAX;
        int ans = -1;
        for(int i =0; i<nums.size(); i++){
            int sub = abs(nums[i]-0);
            if(sub<=min){
                min = sub;
                ans = nums[i];
            }
        }
        return ans;
    }
};