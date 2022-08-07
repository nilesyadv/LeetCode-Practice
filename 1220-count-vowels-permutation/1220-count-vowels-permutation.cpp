class Solution {
public:
    int countVowelPermutation(int n) {
        
        vector<vector<int>> dp(n, vector<int>(5, 1));
        
        int ans = 5, M = 1e9 + 7;
        for(int i = 1; i < n; i++)
        {
            ans = 0;
            for(int j = 0; j < 5; j++)
            {
                dp[i][j] = 0;
                if(j == 0)
                {
                    dp[i][j] = (dp[i][j] % M + dp[i-1][1] % M) % M;
                    dp[i][j] = (dp[i][j] % M + dp[i-1][2] % M) % M;
                    dp[i][j] = (dp[i][j] % M + dp[i-1][4] % M) % M;
                }
                else if(j == 1)
                {
                    dp[i][j] = (dp[i][j] % M + dp[i-1][0] % M) % M;
                    dp[i][j] = (dp[i][j] % M + dp[i-1][2] % M) % M;
                }
                else if(j == 2)
                {
                    dp[i][j] = (dp[i][j] % M + dp[i-1][1] % M) % M;
                    dp[i][j] = (dp[i][j] % M + dp[i-1][3] % M) % M;
                }
                else if(j == 3)
                {
                    dp[i][j] = (dp[i][j] % M + dp[i-1][2] % M) % M;
                }
                else if(j == 4)
                {
                    dp[i][j] = (dp[i][j] % M + dp[i-1][2] % M) % M;
                    dp[i][j] = (dp[i][j] % M + dp[i-1][3] % M) % M;
                }
                
                ans = (ans % M + dp[i][j] % M) % M;
            }
        }
        
        return ans;
    }
};