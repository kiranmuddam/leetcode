class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int startPointer = 0;
        
        if (nums.size() < 2) {
            return nums.size();
        }
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] == nums[i]) {
                continue;
            } else {
                nums[startPointer + 1] = nums[i];
                startPointer += 1;
            }
        }
        return startPointer + 1;
    }
};