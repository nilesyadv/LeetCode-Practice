class Solution {
    int dp[5000];
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        int ans=0;
        for(int i=2;i<n;i++)
        {
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
            {
                dp[i]=1+dp[i-1];
                ans+=dp[i];
            }
        }
        return ans;   
    }
};