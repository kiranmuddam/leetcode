class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> sieve(n + 1, true);        
        sieve[0] = sieve[1] = false;
        
        for (int i = 2; i * i < n; i++) { 
            if (sieve[i]) { 
                for (int ii = i * i; ii < n; ii += i) 
                    sieve[ii] = false; 
            } 
        } 
        
        for (int i = 2; i < sieve.size() - 1; i++) {
            if (sieve[i]) {
                count++;
            }
        }
        
        return count;
    }
};