class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charPosMap;
        int start = 0;
        int maxLength = 0;
        int windowLength = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (charPosMap.find(s[i]) == charPosMap.end()) {
                charPosMap[s[i]] = i;
                windowLength++;
            } else {
                if (charPosMap[s[i]] >= start) {
                    maxLength = max(maxLength, windowLength);
                    windowLength = i - charPosMap[s[i]];
                    start = charPosMap[s[i]]++;
                    charPosMap[s[i]] = i;

                } else {
                    charPosMap[s[i]] = i;
                    windowLength++;
                }
            }
        }
        
        return max(maxLength, windowLength);
    }
};