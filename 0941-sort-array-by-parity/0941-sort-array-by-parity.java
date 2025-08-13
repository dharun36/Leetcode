class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int left = 0;
        int right = nums.length -1;
        while(left < right){
            if(nums[left] %2 ==0){
                left++;
            }
            else{
                int t = nums[left];
                nums[left] = nums[right];
                nums[right] = t;
                right --;
            }
        }
        return nums;
    }
}