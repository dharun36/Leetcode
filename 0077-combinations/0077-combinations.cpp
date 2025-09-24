class Solution {
public:
    void backtrack(int n,int k,vector<vector<int>> & res,  vector<int>&arr,int j){
        if(arr.size()==k){
            res.push_back(arr);
            return ;
        }
        for(int i = j;i<=n;i++){
            arr.push_back(i);
            backtrack(n, k,res,arr,i+1);
            arr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
            vector<vector<int>>  res;
            vector<int> arr;
            backtrack(n, k,res,arr,1);
            return res;
        
    }
};