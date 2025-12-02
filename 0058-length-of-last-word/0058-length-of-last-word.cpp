class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.length();
        int ans = 0;
        for(int i = l -1;i>=0;i--){
            if(s[i]== ' ' && ans==0){
                continue;
            }
            else if(s[i]!=' '){
                ans++;
            }
            else break;
        }

        return ans;
        
    }
};