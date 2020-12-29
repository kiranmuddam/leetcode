class Solution {
public:
    int myAtoi(string s) {
        vector<int> digits;
        bool isFirst = true;
        bool isNegative = false;
        long long int digit = 0;
        bool isSign = false;
        bool isNumberStarted = false;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' '){
                if (isFirst && !isSign) {
                    continue;
                } else if (isSign && !isNumberStarted) {
                    return 0;
                } else {
                    break;
                }
            } else if (isalpha(s[i]) && isFirst) {
                return 0;
            } else if ((s[i] == '-' || s[i] == '+') && isSign) {
               if (isSign && !isNumberStarted) {
                   return 0;
               } else {
                   break;
               }
            } else if (s[i] == '-') {
                isNegative = true;
                isSign = true;
            } else if (isdigit(s[i])) {
                isFirst = false;
                isNumberStarted = true;
                isSign = true;
                int num = s[i] - '0';
               // cout << num << endl;
                digits.push_back(num);
            } else if (s[i] == '.') {
                break;
            } else if (s[i] == '+') {
                isSign = true;
            } else if (isalpha(s[i])) {
                break;
            }
        }
        
        int leadingZeroesCount = 0;
        
        for (int num : digits) {
            if (num == 0) {
                leadingZeroesCount++;
            } else {
                break;
            }
        }
        
        if ((digits.size() - leadingZeroesCount > 10) && isNegative) {
            return INT_MIN;
        } else if (digits.size() - leadingZeroesCount > 10) {
            return INT_MAX;
        } 
        
        for (int i = 0; i < digits.size(); i++) {
           digit += digits[i] * pow(10, digits.size() - 1 -i);
        }
        
        if (isNegative) {
            digit *= -1;
        }
        
        if (digit > INT_MAX) {
            return INT_MAX;
        } else if (digit < INT_MIN) {
            return INT_MIN;
        } else {
            return digit;
        }
    }
};