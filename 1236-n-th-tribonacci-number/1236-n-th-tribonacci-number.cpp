class Solution {
public:

    // int tri(int n, vector<int>& dp){
    //     if(dp[n]!=-1) return dp[n];
    //     if(n<2) return dp[n] = n;
    //     if(n==2) return dp[n] = 1;
    //     return dp[n]= tri(n-1,dp)+tri(n-2,dp)+tri(n-3,dp);
    // }

    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        if(n==0)return n;
        if(n<=2)return 1;
        dp[0] = 0;
        dp[1] =1;
        dp[2] = 1;
        for(int i = 3;i<=n;i++){
            dp[i]  =dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
};