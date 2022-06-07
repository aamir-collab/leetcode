class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans(m+n);
        int i =0; int j =0; int k = 0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                ans[k] = nums1[i];
                i++;
                k++;
            }
            else if(nums2[j]<nums1[i]){
                ans[k] = nums2[j];
                j++;
                k++;
            }
        }
         while (i < m)
        ans[k++] = nums1[i++];
 
    // Store remaining elements of second array
    while (j < n)
        ans[k++] = nums2[j++];
        nums1.clear();
         for (int i=0; i<ans.size(); i++)
         nums1.push_back(ans[i]);
        
    }
};