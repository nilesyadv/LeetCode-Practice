class Solution {
    int dp[2][101];
public:
    int uniquePaths(int m, int n) {
      
        int total=(n-1)+(m-1);
        double res=1;
        
        for(int i=1;i<=min(n-1,m-1);i++) res=(res*(total-i+1))/i;
        return (int)res;
        
    }
};