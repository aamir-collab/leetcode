class Solution {
public:
    int minMoves2(vector<int>& arr) {
      int n = arr.size();
        sort(arr.begin(),arr.end());
      int median = -1, ans = 0;
      if(n%2!=0){
          median = arr[n/2];
      }
        else{
            
            median = (arr[(n-1)/2]+arr[n/2])/2;
        }
        for(int i =0; i<n; i++){
            ans+=abs(median-arr[i]);
        }
        return ans;
    }
};