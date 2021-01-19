class Solution {
public:
    int dp[102]={0};
    int rec(int i, vector<int>&n){
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i] = max(rec(i-2,n)+n[i], rec(i-1,n));
    }
    
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return rec(nums.size()-1,nums);
    }
};