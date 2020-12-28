class Solution {
public:
    bool isAnagram(string s, string t) {
        
        string a = s;
        string b = t;
        
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());
        
        if (a  == b) {
            return true;
        } else {
            return false;
        }
    }
};