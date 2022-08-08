class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> dp(nums.size(), 1);
        
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int length = 0;
            for(int j = 0; j < i; j++)
            {
                if(nums[j] < nums[i])
                {
                    length = max(length, dp[j]);
                }
            }
            dp[i] += length;
            ans = max(ans, dp[i]);
        }
        
        return ans;
    }
};