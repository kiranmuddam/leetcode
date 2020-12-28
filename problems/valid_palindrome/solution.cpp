class Solution {
public:
    bool isPalindrome(string s) {
        if (s == " ") {
            return true;
        }
        int startPointer = 0;
        int endPointer = s.size() - 1;
        while (startPointer < endPointer) {
            if (!(isalpha(s[startPointer]) || isdigit(s[startPointer]))) {
                startPointer++;
            }
            
            if (!(isalpha(s[endPointer]) || isdigit(s[endPointer]))) {
                endPointer--;
            }
            
            if ((isalpha(s[startPointer]) || isdigit(s[startPointer])) && (isalpha(s[endPointer]) || isdigit(s[endPointer]))) {
                if (tolower(s[startPointer]) == tolower(s[endPointer])) {
                    startPointer++;
                    endPointer--;
                } else {
                    return false;
                }
            }
        }
        
        return true;
    }
};