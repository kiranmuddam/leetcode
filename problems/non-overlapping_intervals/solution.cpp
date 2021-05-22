class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count = 0;
        int pre = 0;
        for (int i = 1; i < intervals.size(); i++) {
            vector<int> prev = intervals[pre];
            vector<int> curr = intervals[i];
            
            if (curr[0] < prev[1]) {
                count++;
                if (curr[1] < prev[1]) {
                    pre = i;
                }
            } else {
                pre = i;
            }
        }
         return count;       
    }
};