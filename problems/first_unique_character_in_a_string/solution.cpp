class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> frequencyMap;
        
        for (char currChar : s) {
            frequencyMap[currChar]++;
        }
        
        for (int i = 0; i < s.size(); i++) {
            char currChar = s[i];
            if (frequencyMap[currChar] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};