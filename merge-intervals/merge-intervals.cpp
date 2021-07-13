class Solution {
public:
    
    static bool sortByStartInterval(vector<int> interval, vector<int> interval1) {
        return interval[0] < interval1[0];
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() == 1) {
            return intervals;
        }
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> mergedIntervals;
        vector<int> temp = intervals[0];
        
        for (int i = 1; i < intervals.size(); i++) {
            if (temp[1] >= intervals[i][0]) {
                temp[1] = max(temp[1], intervals[i][1]);
            } else {
                mergedIntervals.push_back(temp);
                temp[0] = intervals[i][0];
                temp[1] = intervals[i][1];
            }
            
        }
        
        mergedIntervals.push_back(temp);
        
        return mergedIntervals;
    }
    
};