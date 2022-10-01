class Solution {
public:
    // int fun(int size, string s,vector<int>dp){
    //     if(s[0] == '0'){
    //         return 0;
    //     }
    //     if(size == 0|| size == 1){
    //         return 1;
    //     }
    //     if(dp[size] != -1){
    //         return dp[size];
    //     }
    //     int output = 0;
    //     if(s[size-1] > '0'){
    //         output = fun(size-1,s, dp);
    //     }
    //     if(s[size-2] == '1' || (s[size-2] == '2' && s[size-1] < '7')){
    //         output+=fun(size-2, s, dp);
    //     }
    //     dp[size] = output;
    //     return dp[size];
    // }
     int numDecodings(string s,int n) {
	    //table to store results of subproblems 
         int count[n+1];  
        count[0] = 1; 
        count[1] = 1; 
		
		// for base condition "01123" should return 0 	
        if(s[0]=='0')   
             return 0; 
			 
       for (int i = 2; i <= n; i++){ 
            count[i] = 0; 
  
        // If the last digit is not 0,   then last digit must add to the number of words 
		
        if (s[i-1] > '0') 
            count[i] = count[i-1]; 
  
        // If second last digit is smaller  than 2 and last digit is smaller than 7,  then last two digits form a valid character 
		
        if (s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7') ) 
            count[i] += count[i-2]; 
    } 
    return count[n];
    }
	
    int numDecodings(string s) {
        return numDecodings(s,s.size());
    }
	
};