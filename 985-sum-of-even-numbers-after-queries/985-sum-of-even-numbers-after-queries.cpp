class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum = 0; int m = nums.size();
        for(int j = 0; j<m; j++){
            if(nums[j]%2==0){
                sum+=nums[j];
        }
        }
        vector<int>ans;
        int n = queries.size();
        for(int i =0; i<n; i++){
            int index = queries[i][1];
            if(nums[index]%2==0){
                sum-=nums[index];
            }
            nums[index]+=queries[i][0];
            if(nums[index]%2==0){
                sum+=nums[index];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};