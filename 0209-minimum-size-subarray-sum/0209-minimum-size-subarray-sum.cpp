class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res =INT_MAX;
        int l = 0;
        int r = 0;
        int sum = 0;
        while(r<nums.size()){
            sum +=nums[r];
            while(sum>=target){
                res = min(res,r - l+1);
                sum -= nums[l++];
            }
            r++;
        }
        return res== INT_MAX ? 0:res;
    }
};