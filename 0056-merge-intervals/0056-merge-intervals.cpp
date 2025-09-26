

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> arr;

        arr.push_back(intervals[0]);
        int n = intervals.size();
        for(int i=0;i<n;i++){
            if(intervals[i][0]<=arr.back()[1])arr.back()[1] = max(intervals[i][1],arr.back()[1]);
            else arr.push_back(intervals[i]);
        }
return arr;

    }
};