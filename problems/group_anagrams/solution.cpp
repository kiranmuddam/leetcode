class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> stringPosMap;
        vector<vector<string>> anagrams;
        
        for (int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            stringPosMap[temp].push_back(strs[i]);
        }
        
        for (auto it : stringPosMap) {
            anagrams.push_back(it.second);
        }
        
        return anagrams;
    }
    
   
};