class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       vector<vector<int>> mergedIntervals;
        int index = 0;
       while (index < intervals.size() &&  intervals[index][1] < newInterval[0]) {
           mergedIntervals.push_back(intervals[index++]);
       }
        
       while (index < intervals.size() && intervals[index][0] <= newInterval[1]) {
           newInterval[0] = min(intervals[index][0], newInterval[0]);
           newInterval[1] = max(intervals[index][1], newInterval[1]);
           index++;
       }
        
        mergedIntervals.push_back(newInterval);
        
        while (index < intervals.size()) {
            mergedIntervals.push_back(intervals[index++]);
        }
     return mergedIntervals;
       }
};