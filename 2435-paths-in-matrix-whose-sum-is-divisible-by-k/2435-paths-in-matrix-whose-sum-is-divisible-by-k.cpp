class Solution {
public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        int dp[n][m][k];
        int MOD = 1000000007;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                for(int kk = 0; kk < k; kk++)
                {
                    dp[i][j][kk] = 0;
                    grid[i][j] %= k;
                    
                    if(i == 0 && j == 0)
                    {
                        if(kk == grid[i][j]) dp[i][j][kk] = 1;
                    }
                    else if(i == 0)
                    {
                        int j1 = (kk - grid[i][j] + k) % k;
                        dp[i][j][kk] += dp[i][j-1][j1];
                    }
                    else if(j == 0)
                    {
                        int j1 = (kk - grid[i][j] + k) % k;
                        dp[i][j][kk] += dp[i-1][j][j1];
                    }
                    else
                    {
                        int j1 = (kk - grid[i][j] + k) % k;
                        dp[i][j][kk] += ((dp[i][j-1][j1] % MOD) + (dp[i-1][j][j1] % MOD)) % MOD;
                    }    
                }
            }
        }
        return dp[n-1][m-1][0];
    }
};