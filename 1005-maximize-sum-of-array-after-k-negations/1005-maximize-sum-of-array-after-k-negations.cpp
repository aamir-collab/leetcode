class Solution {
public:
    pair<int,int>findmin(vector<int>& nums){
       int mx = INT_MAX; int mxi = -1;
        int n = nums.size();
        for(int i =0; i<n; i++){
            if(nums[i]<mx){
                mx = nums[i];
                mxi = i;
            }
        }
        pair<int,int>p;
        p.first = mx;
        p.second = mxi;
        return p;
    }
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n = nums.size();
        while(k--){
            pair<int,int>x = findmin(nums);
            nums[x.second] = -x.first;
        }
        int sum = 0;
        for(int i =0; i<n; i++){
            sum+=nums[i];
        }
        return sum;
    }
};