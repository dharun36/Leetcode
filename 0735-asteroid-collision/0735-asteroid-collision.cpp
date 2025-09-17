class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
 

        stack<int> s;
        for(int i =0;i<ast.size();i++){
            bool destroyed = false;
            while(!s.empty() && (s.top()> 0 && ast[i]<0) ){
                int top = s.top();
                if(top < -(ast[i])){
                    s.pop();
                    continue;
                    
                }
                else if(s.top() == -ast[i]){
                    s.pop();
                }
                destroyed = true;
                break;


            }
            if(! destroyed)
            s.push(ast[i]);
        }
        vector<int> res(s.size());

        for(int i = s.size()-1;i>=0;i--){
            res[i] = s.top();
            s.pop();

        }

        return res;
    }
};