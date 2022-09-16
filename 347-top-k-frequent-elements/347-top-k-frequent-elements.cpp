class Solution {
public:
    typedef pair<int, int> pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int, int>mp;
        for(auto n: nums){
            mp[n]++;
        }
        priority_queue<pi, vector<pi>, greater<pi> > pq;
        for(auto m: mp){
            pq.push({m.second, m.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};