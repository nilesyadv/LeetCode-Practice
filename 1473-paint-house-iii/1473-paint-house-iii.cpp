class Solution
{
    long long dp[105][25][105];
    long long maxi = 1000000000;
    
    long long dfs(int i, int prev, int k, vector<int> &houses, vector<vector<int>> &cost, int m, int n)
    {
    
        if (k < 0)
            return maxi;
        
        if (i >= m)
        {
            if (k == 0)
                return 0;
            else
                return maxi;
        }

        if (dp[i][prev][k] != -1)
            return dp[i][prev][k];
            
        if (houses[i])
        {
            if (houses[i] != prev)
                k--;
            return dfs(i + 1, houses[i], k, houses, cost, m, n);
        }
        
        long long ans = maxi;
        for (int j = 0; j < n; j++)
        {
            if (j + 1 == prev)
                ans = min(ans, cost[i][j] + dfs(i + 1, j + 1, k, houses, cost, m, n));
            else if (j + 1 != prev)
                ans = min(ans, cost[i][j] + dfs(i + 1, j + 1, k - 1, houses, cost, m, n));
        }

        return dp[i][prev][k] = ans;
    }

public:
    int minCost(vector<int> &houses, vector<vector<int>> &cost, int m, int n, int target)
    {

        for (int i = 0; i < 105; i++)
            for (int j = 0; j < 25; j++)
                for (int k = 0; k < 105; k++)
                    dp[i][j][k] = -1;

        long long ans = dfs(0, 0, target, houses, cost, m, n);
        return ans == maxi ? -1 : ans;
    }
};