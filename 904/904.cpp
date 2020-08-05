#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& tree) {
        unordered_map<int,int> fruitFrequencyMap;
        int windowStart = 0, windowEnd = 0, maxFruits = 0;
        for(windowEnd = 0; windowEnd < tree.size(); ++windowEnd){
            int rightTree = tree[windowEnd];
            fruitFrequencyMap[rightTree]++;

        while(fruitFrequencyMap.size() >= 3) {
            int leftTree = tree[windowStart];
            fruitFrequencyMap[leftTree]--;
            if(fruitFrequencyMap[leftTree] == 0){
                fruitFrequencyMap.erase(leftTree);
            }
            windowStart++;
        }
        maxFruits = max(maxFruits , windowEnd - windowStart + 1);
        }
        return maxFruits;
        
    }
};
