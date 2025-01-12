class Solution {
public:
   
    int f(int i , int j , string &s , string &t , vector<vector<int>>&dp){
        if(i>=s.length() || j>=t.length()){
            return 0 ; 
        }
        if(dp[i][j] != -1){
            return dp[i][j]; 
        }
        if(s[i]  == t[j]){
            return dp[i][j] = 1 + f(i+1 , j+1 , s , t , dp);
        }
        return dp[i][j] =  max(f(i+1 , j , s , t,dp) , f(i , j+1 , s , t , dp)); 
    }

    int longestCommonSubsequence(string s1 , string s2){
        int n = s1.size();
        int m = s2.size(); 
        vector<vector<int>>dp(n , vector<int>(m ,  -1)); 
        return f(0 , 0 , s1 , s2, dp);

    }

};