class Solution {
public:

    void back(int k,int n,vector<vector<int>> &res,vector<int> &arr,int j){
        if(n==0 && arr.size()==k){
            res.push_back(arr);
            return ;

        }
        if(n<0) return ;
        for(int i = j;i<=9;i++){
            arr.push_back(i);
            back(k,n-i,res,arr,i+1);
            arr.pop_back();
            
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> arr;
        back(k,n,res,arr,1);
        return res;
    }
};