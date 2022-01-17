class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        long long n=questions.size();
        long long dp[600000]={};
        for(int i=n-1;i>=0;i--)
        {
            long long a=questions[i][0],b=questions[i][1];
            dp[i]=max(a+dp[i+b+1],dp[i+1]);
          
        }
        return dp[0];
    }
};