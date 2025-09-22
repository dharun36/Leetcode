class Solution {
public:
    // int fib(int n,vector<int>&dp){
    //     if(dp[n]!=-1)return dp[n];
    //     if(n<=2) return dp[n] =n;
    //     return dp[n] =  fib(n-1,dp) +  fib(n-2,dp);
    // }

    int climbStairs(int n) {
        
        if(n<=2) return n;
        int a,b;
        a =1;
        b = 2;
        int fib;
        for(int i = 3;i<=n;i++){
            fib = a+b;
            a=b;
            b=fib;

        }
        return fib;
    }
};