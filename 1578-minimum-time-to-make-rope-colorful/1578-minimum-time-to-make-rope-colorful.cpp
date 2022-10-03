class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int pointer = 0;
        int ans = 0;
        
        for(int i = 1; i<colors.size(); i++){
            if(colors[pointer] == colors[i]){
if(neededTime[i] < neededTime[pointer])
                    ans += neededTime[i];
                else
                    ans += neededTime[pointer], pointer = i;
            }
            else{
                pointer = i;
            }
        }
        return ans;
    }
};