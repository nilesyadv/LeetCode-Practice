class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        int a[n][m];
        vector<vector<int>> v(m, vector<int>(n));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int newJ=(j+k)%n;
                int newI= (i+(j+k)/n)%m;
                v[newI][newJ]=grid[i][j];
            }
        }
        return v;
    }
};