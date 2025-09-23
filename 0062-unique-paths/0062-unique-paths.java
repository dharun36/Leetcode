class Solution {
    public int uni(int[][]dp,int m,int n){
        if(m == 0 || n==0){
            return dp[m][n] =  1;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        return dp[m][n] = uni(dp,m-1,n)+uni(dp,m,n-1);
    }
    public int uniquePaths(int m, int n) {
    int[][] arr = new int[m][n];
    for (int i = 0; i < m; i++) {
        Arrays.fill(arr[i], -1);
    }
        return uni(arr,m-1,n-1);
    }
}
