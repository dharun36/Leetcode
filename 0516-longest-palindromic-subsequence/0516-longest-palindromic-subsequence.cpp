class Solution {
public:
    int lcs(string &s,int l ,int r, vector<vector<int>> &memo ){
        if(memo[l][r]!=-1) return memo[l][r];
        if(l> r ) return memo[l][r] = 0;
        if(l == r ) return memo[l][r] = 1;
        if(s[l] == s[r]) return memo[l][r] = 2+lcs(s,l+1,r-1,memo);
        return memo[l][r] = max(lcs(s,l,r-1,memo),lcs(s,l+1,r,memo));
            }
    int longestPalindromeSubseq(string s) {
        int m = s.size();
        vector<vector<int>> memo(m,vector<int>(m,-1));
        return lcs(s,0,m-1,memo);
    }
};