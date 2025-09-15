class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        int c=0;
        for(int i =0;i<nums.size();i++){
            if(mp.contains(nums[i])){
                mp[nums[i]]+=1;
            }
            else{
                mp[nums[i]]=0;
            }
            c+=mp[nums[i]];
        }
        return c;
    }
};