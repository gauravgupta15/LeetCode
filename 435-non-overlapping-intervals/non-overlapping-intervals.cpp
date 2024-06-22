class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b) {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // sort(intervals.begin(),intervals.end(),cmp);
         // Sort intervals based on their end times
    sort(intervals.begin(), intervals.end(), cmp);
         int freeAt = INT_MIN;
         int ans = 0;
         for(int i=0; i<intervals.size(); i++) {
            if(freeAt > intervals[i][0]){ 
                ans++;
                cout << intervals[i][0];
            }
            else freeAt = intervals[i][1];
         } return ans;
    }
};