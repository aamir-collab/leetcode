class Solution {
public:
    int dp[201][20001];
    bool solve(int n, vector<int>& nums, int maxs){
        if(maxs == 0){
            return 1;
        }
        if(n == 0){
            return 0;
        }
        if(dp[n][maxs]!=-1){
            return dp[n][maxs];
        }
        if(nums[n-1]>maxs){
            return dp[n][maxs] = solve(n-1,nums,maxs);
        }
        else{
            return dp[n][maxs] = solve(n-1, nums, maxs-nums[n-1])|| solve(n-1,nums,maxs);
        }
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        memset(dp,-1,sizeof(dp));
        for(int i =0; i<n; i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        else{
            return solve(n,nums,sum/2);
        }
    }
};