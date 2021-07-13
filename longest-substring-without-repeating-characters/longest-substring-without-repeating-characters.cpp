class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> visitedChars;
        int uniqueCounter=0;
        int longUniqueCounter=0;
        for(int i=0;i<s.size();i++){
            if((visitedChars.find(s[i])==visitedChars.end())){
                uniqueCounter=uniqueCounter+1;
                longUniqueCounter = max(longUniqueCounter,uniqueCounter);
                visitedChars[s[i]]=i;
            }
            else{
                if((i-visitedChars[s[i]])<=uniqueCounter){
                    uniqueCounter=i-visitedChars[s[i]];
                    visitedChars.erase(s[i]);
                    visitedChars[s[i]]=i;
                }
                else{
                    uniqueCounter++;
                    longUniqueCounter=max(longUniqueCounter,uniqueCounter);
                    visitedChars[s[i]]=i;

                }                
            }

        }
        return longUniqueCounter;
        
    }
};