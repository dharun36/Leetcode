    bool desc(vector<int>& a,vector<int> &b){
        return a[1]<b[1];
    }

class Solution {
public:

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        sort(intervals.begin(),intervals.end(),desc);
        int endtime = INT_MIN;
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][0]>=endtime)endtime=intervals[i][1];
            else count++;

        }
        return count;
    }
};