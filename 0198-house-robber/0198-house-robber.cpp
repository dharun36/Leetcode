class Solution {
public:
    int maxV(vector<int> &nums, int n, vector<int> &memo) {
        if (n == 0) return nums[0];
        if (n == 1) return max(nums[0], nums[1]);

        if (memo[n] != -1) return memo[n];

        int pick = nums[n] + maxV(nums, n - 2, memo);
        int notPick = maxV(nums, n - 1, memo);

        return memo[n] = max(pick, notPick);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        vector<int> memo(n, -1);
        return maxV(nums, n - 1, memo);
    }
};
