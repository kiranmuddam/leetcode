class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int start = 0;
        int end = 0;
        int minLen = INT_MAX;
        int windowSum = 0;
        
        for (int end = 0; end < nums.size(); end++) {
            windowSum += nums[end];
            
            while (windowSum >= s) {
                windowSum -= nums[start];
                minLen = min(minLen, end - start + 1);
                start++;
            }
            
        }
        
        if (minLen == INT_MAX) {
            return 0;
        }
        
        return minLen;
    }
};