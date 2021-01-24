class Solution {
public:
    string maximumTime(string time) {
        int first = time[0] - '0';
        int second = time[1] - '0';
        int third = time[3] - '0';
        int four = time[4] - '0';
        
        if (time[0] == '?' && time[1] == '?') {
            time[0] = '2';
            time[1] = '3';
        }
        
        if (time[3] == '?' && time[4] == '?') {
            time[3] = '5';
            time[4] = '9';
        }
        
        if (time[0] == '?' && second < 4) {
            time[0] = '2';
        }
        
        if (time[0] == '?' && second >= 4) {
            time[0] = '1';
        }
        
        if (first == 2 && time[1] == '?') {
            time[1] = '3';
        }
        
        if ((first == 1 || first == 0) && time[1] == '?') {
            time[1] = '9';
        }
        
        if (time[3] == '?') {
            time[3] = '5';
        }
        
        if (time[4] == '?') {
            time[4] = '9';
        }
        
        return time;
    }
};