class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        int left = 0,right = 0;
        deque<int> dq;
        while(right<nums.size()){
            while(!dq.empty() && nums[dq.back()] < nums[right]){
                dq.pop_back();
            }
            dq.push_back(right);
            if(right-left+1 == k){
                if(dq.front()<left) dq.pop_front();
                res.push_back(nums[dq.front()]);
                
                left++;
            }
            right++;

        }
        return res;
    }
};