class Solution {
public:

    void reverse(vector<int>&nums, int l ,int r){
        while(l<r){
            int t = nums[l];
            nums[l] = nums[r];
            nums[r]= t;
            r--;
            l++;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        
    }
};