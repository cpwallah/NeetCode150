class Solution {
public:
   int ways(int n,vector<int>&dp){
       if(n<=1){
           return 1;
       }
       if(dp[n]!=-1){
           return dp[n];
       }
       return dp[n]=ways(n-1,dp)+ways(n-2,dp);
   }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return ways(n,dp);
    }
};
