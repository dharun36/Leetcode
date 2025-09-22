class Solution {
public:
    // int rec(int n , vector<int>& dp,vector<int>& cost){
    //     if(n<0) return 0;
    //     if(dp[n]!=-1)return dp[n];
    //     return dp[n]  = cost[n] + min(rec(n-1,dp,cost),rec(n-2,dp,cost));
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,0);
        dp[0] = cost[0];
        dp[1] =cost[1];
        for(int i = 2;i<n;i++){
            dp[i] = cost[i] + min(dp[i-2],dp[i-1]);
        }
        return min(dp[n-1],dp[n-2]);
    }
};