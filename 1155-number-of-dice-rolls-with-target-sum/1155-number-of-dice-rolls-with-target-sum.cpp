class Solution {
    int helper(int n, int k, int target, vector<vector<int>> &dp){
        int totalWays = 0;
        if(target == 0 && n == 0) return 1;
        if(target < 0 || n < 0) return 0;
        if(dp[n][target] != -1) return dp[n][target];
        for(int i = 1; i <= k; i++){
            if(i <= target) totalWays = ((totalWays % 1000000007) + (helper(n - 1, k, target - i, dp) % 1000000007)) % 1000000007;
        }
        return dp[n][target] = totalWays;
    }
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        return helper(n, k, target, dp);
    }
};