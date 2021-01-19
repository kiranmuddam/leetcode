class Solution {
public:
    vector<int> nums;
    vector<int> original;
    Solution(vector<int>& nums) {
        this->nums = nums;
        this->original = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return this->original;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        random_shuffle(begin(this->nums), end(this->nums));
        
        return this->nums;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */