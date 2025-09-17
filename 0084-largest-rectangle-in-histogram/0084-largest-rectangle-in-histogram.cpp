class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        stack<int> st;
        int l;
        for(int i = 0;i<heights.size();i++){
            while(!st.empty() && heights[i]<heights[st.top()] ){
                int topE = st.top();
                st.pop();
                if(st.empty()) l = -1;
                else l = st.top();
                int width = i - l - 1;
                int res = width * heights[topE];
                maxArea =max( maxArea,res);

            }
            st.push(i);
        }

        while(!st.empty()){
                int topE = st.top();
                st.pop();
                if(st.empty()) l = -1;
                else l = st.top();
                int width = heights.size() - l - 1;
                int res = width * heights[topE];
                maxArea =max( maxArea,res);

        }
    
        return maxArea;
    }
};