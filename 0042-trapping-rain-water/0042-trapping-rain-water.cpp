class Solution {
public:
    int trap(vector<int>& height) {
        int c = 0;
        int max = height[0];
        vector<int> lmax(height.size());
        vector<int> rmax(height.size());
        lmax[0]= height[0];
        for(int i = 1;i<height.size();i++){
            if(height[i]>max){
                max = height[i];
            }
            lmax[i] = max;
        }
        max= height[height.size()-1];
        for(int i = height.size()-1;i>=0;i--){
            if(height[i]>max){
                max = height[i];
            }
            rmax[i] = max;
        }

        for(int i = 0;i<height.size();i++){
            int min = std::min(lmax[i], rmax[i]);
            c+=min - height[i];
        }
        return c;
    }
};