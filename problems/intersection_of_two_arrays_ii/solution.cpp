class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> frequencyMap;
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            int currentNumber = nums1[i];
            if (frequencyMap.find(currentNumber) != frequencyMap.end()) {
                frequencyMap[currentNumber]++;
            } else {
                frequencyMap.insert(make_pair(currentNumber, 1));
            }
            
        }
        
        for (int i = 0; i < nums2.size(); i++) {
            int currentNumber = nums2[i];
            if (frequencyMap.find(currentNumber) != frequencyMap.end() && frequencyMap[currentNumber] > 0) {
                result.push_back(currentNumber);
                frequencyMap[currentNumber]--;
            }
        }
        
        return result;
    }
};