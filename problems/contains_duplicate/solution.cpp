class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> frequencyMap;
        
        for (int i = 0; i < nums.size(); i++) {
            if (frequencyMap.find(nums[i]) != frequencyMap.end()) {
                return true;
            } else {
                frequencyMap[nums[i]]++;
            }
        }
        return false;
    }
};