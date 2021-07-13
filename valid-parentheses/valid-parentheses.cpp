class Solution {
public:
    bool isValid(string s) {
        stack<char> valid;
        
        unordered_map<char, char> bracesPair;
        
        bracesPair['}'] = '{';
        bracesPair[']'] = '[';
        bracesPair[')'] = '(';

        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
                valid.push(s[i]);
            } else {
                if (valid.empty() || (valid.top() != bracesPair[s[i]])) {
                    return false;
                }
                
                valid.pop();
            }
        }
        
        if (valid.empty()) {
            return true;
        }
        
        return false;
    }
};