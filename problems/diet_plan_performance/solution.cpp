class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int points = 0, sum = 0;
        for (int i = 0; i < calories.size(); i++) {
            sum = sum + calories[i];
            if ((i + 1) >= k) {
                if (sum > upper) {
                    points++;
                } else if (sum < lower) {
                    points--;
                }
                
                sum = sum - calories[i - k + 1];
            }
        }
        
        return points;
    }
};