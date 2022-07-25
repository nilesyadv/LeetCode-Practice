class Solution {
    long long dp[51][51][51];
    #define sp " "
    const int M = 1000000000 + 7;
    
    
    int sum(int a, int b, int M)
    {
        int s = a + b;
        s = s % M;
        return s;
    }
    
    int TotalNoOfPaths(int m, int n, int maxMove, int startRow, int startColumn)
    {
        //cout<<m<<sp<<n<<sp<<maxMove<<sp<<startRow<<sp<<startColumn<<endl;
        if(maxMove == 0) return dp[startRow][startColumn][maxMove] = 0;
        
        if(dp[startRow][startColumn][maxMove] != -1) return dp[startRow][startColumn][maxMove];
        
        //dp[startRow][startColumn][maxMove] = 0;
        long long ans = 0;
        
        //cout<<"a";
        if(startRow + 1 == m) ans = sum(ans, 1, M);
        else ans = sum(ans, TotalNoOfPaths(m, n, maxMove - 1, startRow + 1, startColumn), M);
        
        //cout<<"b";
        if(startRow - 1 == -1) ans += 1;
        else ans = sum(ans, TotalNoOfPaths(m, n, maxMove - 1, startRow - 1, startColumn), M);
        
        //cout<<"c";
        if(startColumn + 1 == n) ans += 1;
        else ans = sum(ans, TotalNoOfPaths(m, n, maxMove - 1, startRow, startColumn + 1), M);
        
        //cout<<"d";
        if(startColumn - 1 == -1) ans += 1;
        else ans = sum(ans, TotalNoOfPaths(m, n, maxMove - 1, startRow, startColumn - 1), M);
        
        return dp[startRow][startColumn][maxMove] = ans;
    }
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        for(int i = 0; i <= 50; i++)
            for(int j = 0; j <= 50; j++)
                for(int k = 0; k <= 50; k++) 
                    dp[i][j][k]=-1;
        
        return TotalNoOfPaths(m, n, maxMove, startRow, startColumn);
        
    }
};