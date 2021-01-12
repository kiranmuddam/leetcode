// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        
        int lastBadVersion = -1;
        
        while (low <= high) {
            long long int mid = low;
            mid += high;
            mid = mid / 2;
            if (isBadVersion(mid)) {
                high = mid - 1;
                lastBadVersion = mid;
            } else {
                low = mid + 1;
            }
        }
        
        return lastBadVersion;
    }
};