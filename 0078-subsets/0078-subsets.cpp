class Solution {
public:

    void back(vector<int>& nums,vector<vector<int>>& res,vector<int> &arr,int j){
        res.push_back(arr);
        for(int i = j;i<nums.size();i++){
             arr.push_back(nums[i]);
             back(nums,res,arr,i+1);
             arr.pop_back();

        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> arr;
        back(nums,res,arr,0);
        return res;
    }
};