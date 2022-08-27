class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        stack<int>st;
        map<int,int>m;
        for(int i = nums2.size()-1; i>=0; i--){
            while(st.size()>0 && st.top()<=nums2[i]){
               
                    st.pop();
                }
                if(st.empty()){
                    m[nums2[i]]=-1;
                }
                else{
                    m[nums2[i]] = st.top();
                }
            
            st.push(nums2[i]);
        }
        
        for(auto i: nums1){
            v.push_back(m[i]);
        }
        
        return v;
    }
    };