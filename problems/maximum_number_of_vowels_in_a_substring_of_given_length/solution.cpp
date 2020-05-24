class Solution {
public:
    int maxVowels(string intArray, int k) {
    int maxVowelSize=-100;
    int windowVowels=0;
    int windowStart=0;
        for(int windowEnd =0;windowEnd<intArray.size();windowEnd++){
            if(intArray[windowEnd]=='a' || intArray[windowEnd]=='e' || intArray[windowEnd]=='i' || intArray[windowEnd]=='o' || intArray[windowEnd]=='u'){
            windowVowels++;
        }
            if(windowEnd>=k-1){
                maxVowelSize = max(maxVowelSize,windowVowels);
                if(intArray[windowStart]=='a' || intArray[windowStart]=='e' || intArray[windowStart]=='i' || intArray[windowStart]=='o' || intArray[windowStart]=='u'){
            windowVowels--;
        }
            windowStart++;
                
            }
            
        }
        return maxVowelSize;
    }
};