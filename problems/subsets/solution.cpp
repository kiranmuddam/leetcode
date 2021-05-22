class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        output.push_back({});
        for (int num : nums) {
            vector<vector<int>> currentSet;
            for (vector<int> curr : output) {
                curr.push_back(num);
                currentSet.push_back(curr);
            }
            
            for (vector<int> curr : currentSet) {
                output.push_back(curr);
            }
        }
        
        return output;
    }
};