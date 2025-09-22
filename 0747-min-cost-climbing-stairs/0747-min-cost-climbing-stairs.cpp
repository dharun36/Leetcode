class Solution {
public:
    int rec(int n , vector<int>& dp,vector<int>& cost){
        if(n<0) return 0;
        if(dp[n]!=-1)return dp[n];
     

        return dp[n]  = cost[n] + min(rec(n-1,dp,cost),rec(n-2,dp,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        
        return min(rec(cost.size()-1,dp,cost),rec(cost.size()-2,dp,cost));
    }
};