class Solution {
public:

    void backtrack(int t,vector<int>& cand ,vector<vector<int>>& res,vector<int>&arr , int j){
        if(t == 0){
            res.push_back(arr);
            return;
        }
        if(t<0)return ;
        for(int i = j;i<cand.size();i++){
            arr.push_back(cand[i]);
            backtrack(t-cand[i],cand,res,arr ,i);
            arr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> arr;
        backtrack(target,candidates,res,arr ,0);
        return res;
    }
};