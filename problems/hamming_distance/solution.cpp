class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> xBits(x);
        bitset<32> yBits(y);
        
        int count = 0;
        
        for (int i = 0; i < xBits.size(); i++) {
            if (xBits[i] != yBits[i]) {
                count++;
            }
        }
        
        return count;
    }
};