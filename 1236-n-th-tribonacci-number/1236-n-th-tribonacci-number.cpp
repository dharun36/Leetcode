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
        int a,b,c,tri;
        a=0;
        b=1;
        c=1;
        for(int i = 3;i<=n;i++){
            tri = a+b+c;
            a=b;
            b=c;
            c=tri;
        }
        return tri;
    }
};