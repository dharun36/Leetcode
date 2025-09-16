class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0;
        vector<int> res;
        int count2 = 0;
        int can1,can2;
        for(int i =0;i<nums.size();i++){
            if(count1 == 0 && nums[i]!=can2){
                can1 = nums[i];
            }
            else if(count2 == 0 && nums[i]!=can1){
                can2 = nums[i];
            }
            if(nums[i]==can1){
                count1++;
            }
            else if(nums[i] == can2){
                count2++;
            }
            else {
                count1--;
                count2--;
            }

        }


        count1 = count2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==can1) count1++;
            else if(nums[i]==can2) count2++;
        }

        if(count1 >n/3){
            res.push_back(can1);

        }
        if(count2 > n/3){
            res.push_back(can2);
        }
        return res;
    }
};