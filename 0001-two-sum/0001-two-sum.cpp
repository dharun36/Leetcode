class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i = 0;i<nums.size();i++){
            int ele = target - nums[i];
            if(mp.contains(ele))return {mp[ele],i};
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};