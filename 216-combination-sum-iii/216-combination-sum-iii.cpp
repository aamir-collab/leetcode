class Solution {
public:
    vector<vector<int>> ans;
    int sum(vector<int>temp){
        int sum = 0;
        for(auto x: temp){
            sum+=x;
        }
        return sum;
    }
    void helper(int k , int n, vector<int>temp, int num){
        if(k == 0){
            if(sum(temp) == n){
                ans.push_back(temp);
        }
            return;
        }
       
        if(num >9)return ;
        temp.push_back(num);
        helper(k-1, n, temp, num+1);
        temp.pop_back();
        helper(k, n, temp, num+1);
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        helper(k, n, temp, 1);
        return ans;
    }
};