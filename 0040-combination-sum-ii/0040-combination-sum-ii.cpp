class Solution {
public:
    void back(vector<int>&nums,int t ,vector<vector<int>>& res, vector<int>&arr,int j){
        if(t == 0){
            sort(arr.begin(),arr.end());
            res.push_back(arr);
        }
        if(t<0){
            return ;
        }
        for(int i = j;i<nums.size();i++){
            if (i > j && nums[i] == nums[i - 1]) continue;

            if (nums[i] > t) break;

            arr.push_back(nums[i]);
            back(nums,t-nums[i],res,arr,i+1);
            arr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> arr;
        sort(candidates.begin(),candidates.end());
        back(candidates,target,res,arr,0);
        return res;
    }
};