class Solution {
public:

    int tri(int n, vector<int>& dp){
        if(dp[n]!=-1) return dp[n];
        if(n<2) return dp[n] = n;
        if(n==2) return dp[n] = 1;
        return dp[n]= tri(n-1,dp)+tri(n-2,dp)+tri(n-3,dp);
    }

    int tribonacci(int n) {
        vector<int> dp(n+3,-1);
        return tri(n,dp);
    }
};