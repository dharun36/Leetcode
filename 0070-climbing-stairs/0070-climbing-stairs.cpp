class Solution {
public:
    int fib(int n,vector<int>&dp){
        if(dp[n]!=-1)return dp[n];
        if(n<=2) return dp[n] =n;
        return dp[n] =  fib(n-1,dp) +  fib(n-2,dp);
    }
    int climbStairs(int n) {
        
        vector<int>dp(n+1,-1);
        return fib(n,dp);
    }
};