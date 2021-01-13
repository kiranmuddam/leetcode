class Solution {
public:    
    int climbStairs(int n) {
        unordered_map<int, int> cache;
        cache[1] = 1;
        cache[2] = 2;
        for (int i = 3; i <= n; i++) {
        cache[i] = cache[i - 1] + cache[i - 2];
        }
        
        return cache[n];
        
    }
};