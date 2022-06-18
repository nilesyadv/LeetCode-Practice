class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        int b[n][m];
        b[0][0]=grid[0][0];
        for(int i=1;i<n;i++) b[i][0]=grid[i][0]+b[i-1][0];
        for(int j=1;j<m;j++) b[0][j]=grid[0][j]+b[0][j-1];
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                int x=grid[i][j]+b[i-1][j];
                int y=grid[i][j]+b[i][j-1];
                b[i][j]=min(x,y);
            }
        }
        
        return b[n-1][m-1];
    }
};