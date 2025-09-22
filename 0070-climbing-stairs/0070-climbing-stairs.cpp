class Solution {
public:
    // int fib(int n,vector<int>&dp){
    //     if(dp[n]!=-1)return dp[n];
    //     if(n<=2) return dp[n] =n;
    //     return dp[n] =  fib(n-1,dp) +  fib(n-2,dp);
    // }

    int climbStairs(int n) {
        
        vector<int>dp(n+1,-1);
        if(n<=2) return n;
        dp[1] =1;
        dp[2] = 2;
        for(int i = 3;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};