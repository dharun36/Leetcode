class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = 0;
        for(i = nums.size()-1;i>0 && nums[i]<=nums[i-1];i--);
        i--;
        if(i>=0){
            int j;
            for( j = nums.size()-1; j>i && nums[j]<=nums[i];j--);
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
        else{
            reverse(nums.begin(),nums.end());
        }
    }
};