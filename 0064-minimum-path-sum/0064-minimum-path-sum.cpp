class Solution {
public:
    int mps(vector<vector<int>>& dp,int m ,int n,vector<vector<int>>& grid){
        if(dp[m][n]!=-1)return dp[m][n];
        if(m == 0 && n==0 )return grid[m][n];
        
        if(m == 0 ) return dp[m][n] = grid[m][n]+ mps(dp,m,n-1,grid);
        if(n == 0 ) return dp[m][n] = grid[m][n]+ mps(dp,m-1,n,grid);
        return dp[m][n] = grid[m][n] + min(mps(dp,m-1,n,grid) , mps(dp,m,n-1,grid));

    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return mps(dp,m-1,n-1,grid);
    }
};
