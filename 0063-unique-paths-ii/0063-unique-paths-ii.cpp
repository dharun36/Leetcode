class Solution {
public:
int up(vector<vector<int>>&dp ,int m,int n,vector<vector<int>>& grid){
    if(dp[m][n] !=-1)return dp[m][n];
    if(grid[m][n] == 1)return 0;
    if(m == 0 && n == 0)return dp[m][n] = 1;

    if(grid[m][n] == 1)return dp[m][n]  = 0;
    if(m == 0)return dp[m][n]= up(dp,m,n-1,grid);
    if(n==0)return dp[m][n] = up(dp,m-1,n,grid);
    return dp[m][n] = up(dp,m,n-1,grid)+up(dp,m-1,n,grid);
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> memo(m,vector<int>(n,-1));

        return up(memo,m-1,n-1,obstacleGrid);
    }
};