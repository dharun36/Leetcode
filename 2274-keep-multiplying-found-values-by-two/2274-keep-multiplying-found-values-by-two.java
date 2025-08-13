class Solution {
    public int findFinalValue(int[] nums, int original) {
        int freq[] = new int[1001];
        for(int i:nums){
            freq[i]++;

        }
        while(true){
            if(original>1000 || freq[original]==0  ){

               return original;

            }
            original*=2;
        }
    }
}