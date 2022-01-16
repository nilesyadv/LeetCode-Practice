class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        long long n=questions.size();
        long long dp[n+1]; dp[n]=0;
        for(int i=n-1;i>=0;i--)
        {
            long long a=questions[i][0],b=questions[i][1];
            if(i+b+1>=n)
            {
                dp[i]=max(a,dp[i+1]);
            }
            else
            {
                dp[i]=max(a+dp[i+b+1],dp[i+1]);
            }
        }
        return dp[0];
    }
};