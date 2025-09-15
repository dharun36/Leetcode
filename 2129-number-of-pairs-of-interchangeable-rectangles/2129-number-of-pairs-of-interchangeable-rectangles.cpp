class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long count = 0;
        map<double,double >mp;
        for(int i = 0;i<rectangles.size();i++){
            double r = (double)rectangles[i][0]/rectangles[i][1];
            if(mp.contains(r)) mp[r]++;
            else mp[r] = 0;

            count+=mp[r];

        }
        return count;
    }
};