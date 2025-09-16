class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size());
        map<int,int>mp;
        stack<int> s;

        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() &&s.top()<= nums2[i])s.pop();
            if(s.empty()){
                mp[nums2[i]]=-1;
            }
            else mp[nums2[i]]=s.top();

            s.push(nums2[i]);

        }

        for(int i = 0;i<nums1.size();i++){
            res[i]=mp[nums1[i]];

        }
        return res;
    }
};