class Solution {
public:
    int totalFruit(vector<int>& tree) {
        unordered_map<int,int> fruitFrequencyMap;
        int windowStart=0, windowEnd=0, maxFruits=0;
        for(windowEnd=0;windowEnd<tree.size();++windowEnd){
            int rightChar = tree[windowEnd];
            fruitFrequencyMap[rightChar]++;
        while(fruitFrequencyMap.size()>=3){
            int leftChar = tree[windowStart];
            fruitFrequencyMap[leftChar]--;
            if(fruitFrequencyMap[leftChar]==0){
                fruitFrequencyMap.erase(leftChar);
            }
            windowStart++;
        }
        maxFruits = max(maxFruits , windowEnd-windowStart+1);
        }
        return maxFruits;
        
    }
};