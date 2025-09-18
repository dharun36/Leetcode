class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg = -INFINITY;
        int sum = 0;
        int l=0,r = 0;
        while(r<nums.size()){
            sum += nums[r];
            if(r-l+1 ==k){
                double av = (double)sum/k;
                maxAvg = max(av , maxAvg);
                sum -= nums[l++];
            }
            r++;
        }
        return maxAvg;
    }
};