class Solution {
    int dp[2][101];
public:
    int uniquePaths(int m, int n) {
      
        
        for(int i=0;i<n;i++) dp[0][i]=1;
        for(int i=0;i<n;i++) dp[1][i]=i+1;
        
        for(int i=2;i<m;i++)
            for(int j=1;j<n;j++)
                dp[1][j]=dp[1][j]+dp[1][j-1];
        
        if(m==1) return 1;
        return dp[1][n-1];
    }
};