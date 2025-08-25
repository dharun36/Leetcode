class Solution {
    public int thirdMax(int[] nums) {
        long f_max = Long.MIN_VALUE;
        long s_max = Long.MIN_VALUE;
        long t_max = Long.MIN_VALUE;

        for(int ele : nums){
            if(ele == f_max||ele == s_max || ele==t_max) continue;

            if(ele>f_max){
                t_max=s_max;
                s_max=f_max;
                f_max=ele;
                
            }
            else if(ele>s_max){
                t_max=s_max;
                s_max=ele;

            }
            else if(ele>t_max){ t_max=ele;}
        }

        return t_max==Long.MIN_VALUE?(int)f_max:(int)t_max;

    }
}
