class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        
        int next = 0;
        int i = 0;
        for(i = 1; i <= arr[arr.size() - 1]; i++) {
            if (arr[next] == i){
                next++;
            } else {
                count++;
            }
            if (count == k) {
                return i;
            }
        }
        
        while(count  < k - 1) {
            i++;
            count++;
        }
        
        
        
        return i;
        
    }
};
