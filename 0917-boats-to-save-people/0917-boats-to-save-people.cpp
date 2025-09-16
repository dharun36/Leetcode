class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
    int c= 0;
        int l = 0;
        int r = people.size()-1;
        while(l<=r){
            int sum =people[l]+people[r];
            if(sum <= limit){
                c++;
                l++;
                r--;
            }
            else {
                r--;
                c++;
            }

        }
       return c;
    }
};