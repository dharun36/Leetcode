class Solution {
public:
    string removeOuterParentheses(string str) {
        string res;
        int count = 0;
        for(int i = 0;i<str.size();i++){
            if(str[i]=='('){
                if(count++ > 0){
                    res+='(';
                }
            }
            else{
                if(--count>0) res+=')';
            }
        }
        return res;
    }
};
