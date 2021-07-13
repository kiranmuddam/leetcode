class Solution {
public:
    int reverse(int x) {
        int envMax = INT_MAX;
        int envMin = INT_MIN;
        bool isNegative = false;
        long int reversedNumber = 0;
        if (x == 0 || x == INT_MAX || x == INT_MIN) {
            return 0;
        }
        if (x < 0) {
            isNegative = true;
            x *= -1;
        }
        int count = floor(log10(x) + 1);
        while (x > 0) {
            reversedNumber += (x % 10) * pow(10, count - 1);
            x = x / 10;
            count--;
        }
        
        if (isNegative) {
            reversedNumber *= -1;
        }
        
        if (reversedNumber < envMin || reversedNumber > envMax) {
            return 0;
        } else {
            return reversedNumber;
        }
        
    }
};