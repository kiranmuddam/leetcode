class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<string> result;
        stringstream temp;
        
        if (nums.empty()) {
            if (upper - lower  > 0) {
            temp << to_string(lower);
            temp << "->";
            temp << to_string(upper);
        } else if (upper - lower == 0) {
            temp << to_string(lower);
          }
            result.push_back(temp.str());
            return result;
        } else if (nums[0] > lower) {
             if (nums[0] - lower > 1) {
            temp << to_string(lower);
            temp << "->";
            temp << to_string(nums[0] - 1);
            result.push_back(temp.str());
        } else if (nums[0] - lower == 1) {
            temp << to_string(lower);
            result.push_back(temp.str());
        }
        }
        
        
        for (int i = 1; i < nums.size(); i++) {
            stringstream temp;
            if (nums[i] - nums[i - 1] > 2) {
            stringstream temp;
            temp << to_string(nums[i - 1] + 1);
            temp << "->";
            temp << to_string(nums[i] - 1);
            result.push_back(temp.str());
        } else if (nums[i] - nums[i - 1] == 2) {
            temp << to_string(nums[i] - 1);
            result.push_back(temp.str());
        }
        }
        
        temp.clear();
        if (nums[nums.size() - 1] < upper) {
            stringstream temp;
            int last = nums[nums.size() - 1];
            if (upper - last > 1) {
            stringstream temp;
            temp << to_string(last + 1);
            temp << "->";
            temp << to_string(upper);
            result.push_back(temp.str());
        } else if (upper - last == 1) {
            stringstream temp;
            temp << to_string(upper);
            result.push_back(temp.str());
        }
        }
        return result;
    }
};