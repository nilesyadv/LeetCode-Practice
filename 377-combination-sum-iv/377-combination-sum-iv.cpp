class Solution {
    int TotalWays(vector<int>& nums, int target, vector<int>& dp){
        if(target == 0) return 1;
        if(target < 0) return 0;
        
        if(dp[target] != -1) return dp[target];
        
        dp[target] = 0;
        for(int i = 0; i < nums.size(); i++)
            dp[target] += TotalWays(nums, target - nums[i], dp);
        
        return dp[target];
        
    }
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1, -1);
        return TotalWays(nums, target, dp);
    }
};