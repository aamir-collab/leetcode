class Solution {
public:
    int findJudge(int n, vector<vector<int>>& edges) {
     vector<int>indegree(n+1, 0);
        for(int i =0; i<edges.size(); i++){
            indegree[edges[i][0]]--;
            indegree[edges[i][1]]++;
        }
        for(int i =1; i<indegree.size(); i++){
            if(indegree[i] == n-1){
                return i;
                
            }
        }
        return -1;
    }
};