class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if (s1.size() > s2.size()) {
            return false;
        }
        
        vector<int> s1Freq(26, 0), s2Freq(26, 0);
        int i = 0;
        
        for (; i < s1.size(); i++) {
            ++s1Freq[s1[i] - 'a'];
            ++s2Freq[s2[i] - 'a'];
        }
        
        if (s1Freq == s2Freq) {
            return true;
        }
        
        for (; i < s2.size(); i++) {
            --s2Freq[s2[i - s1.size()] - 'a'];
            ++s2Freq[s2[i] - 'a'];
            
            if (s1Freq == s2Freq) {
                return true;
            }
        }
        
        return false;
    }
};