class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") {
            return 0;
        }
        int hayPointer = 0;
        int needlePointer = 0;
        
        int matchStart = 0;
        bool startMatch = false;
        
        
        while (hayPointer < haystack.size()) {
            if (haystack[hayPointer] != needle[needlePointer]) {
                if (startMatch) {
                    hayPointer = matchStart;
                    startMatch = false;
                }
                hayPointer++;
                needlePointer = 0;
            } else if (haystack[hayPointer] == needle[needlePointer]) {
                
                if (!startMatch) {
                    startMatch = true;
                    matchStart = hayPointer;
                }
                if (needlePointer == needle.size() - 1) {
                    return matchStart;
                }
                hayPointer++;
                needlePointer++;
                
            }
        }
        
        return -1;
    }
};