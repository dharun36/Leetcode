class Solution {
public:
    string removeDuplicates(string str) {
        string s;
        for(char ch : str){
            bool destroyed = false;
            while(!s.empty() && s.back() == ch){
                s.pop_back();
                destroyed = true;
            }
            if(!destroyed){
                s.push_back(ch);
            }
        }

        return s;
    }
};