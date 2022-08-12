class Solution {
public:
    
    int solve(vector<int>&nums, int n, int curr, int prev, vector<vector<int>>&dp){
        if(curr == n){
            return 0;
        }
        if(dp[curr][prev+1]!=-1){
            return dp[curr][prev+1];
        }
        //include
        int take= 0;
        if(prev == -1 || nums[curr]>nums[prev]){
            take = 1+solve(nums,n,curr+1,curr,dp);
        }
        //exclude
        int nottake = 0+solve(nums,n,curr+1,prev,dp);
        return dp[curr][prev+1] = max(take,nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
       
        int n = nums.size();
        vector<vector<int> >dp(n,vector<int>(n+1,-1));
        int ans = solve(nums,n,0,-1,dp);
        return ans;
    }
};