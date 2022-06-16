class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
     
        set<int>ans;
        
        int i = 0;
        int j = 0;
        int n = arr1.size();
        int m = arr2.size();
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr1[i] > arr2[j]){
                j++;
            }
            else{
                ans.insert(arr1[i]);
                i++;
                j++;
            }
        }
        vector<int>res(ans.begin(), ans.end());
        return res;
        
    }
};