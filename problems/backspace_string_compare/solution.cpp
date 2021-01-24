class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int sPointer = -1;
        int tPointer = -1;
        
        for (int i = 0; i < S.size(); i++) {
            if (S[i] == '#') {
                if (sPointer >= 0) {
                    sPointer--;
                }
            } else {
                sPointer++;
                S[sPointer] = S[i];
            } 
        }
        
        for (int i = 0; i < T.size(); i++) {
            if (T[i] == '#') {
                if (tPointer >= 0) {
                    tPointer--;
                }
            } else {
                tPointer++;
                T[tPointer] = T[i];
            } 
        }
        
        //cout << sPointer << tPointer<< endl;
        
        
        if (sPointer != tPointer) {
            return false;
        }
        
        if (sPointer == -1) {
            return true;
        }
        
        
        for (int i = 0; i <= sPointer; i++) {
            if (S[i] != T[i]) {
                return false;
            }
        }
        
        return true;
    }
};