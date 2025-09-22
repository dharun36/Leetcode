class Solution {
    public int minCostClimbingStairs(int[] cost) {
         int n=cost.length;
        int[] dp = new int[n];
        int t1 = cost[0];
        int t2 = cost[1];
        int t3 ;
        for(int i = 2;i<n;i++){
            t3 = cost[i] + Math.min(t2,t1);
            t1=t2;
            t2=t3;
        }
        return Math.min(t1,t2);
    }
}