class Solution {
public:
    bool isHappy(int n) {
        
        if (n == 1) {
            return true;
        }
        
        unordered_map<int, bool> visited;
        
        visited[n] = true;
        
        while (n != 1) {
            int temp = n;
            n = 0;
            while (temp > 0) {
                n += pow((temp % 10), 2);
                temp = temp / 10;
            }
            
            if (visited.find(n) == visited.end()) {
                visited[n] = true;
            } else {
                return false;
            }
        }
        
        return true;
        
    }
};