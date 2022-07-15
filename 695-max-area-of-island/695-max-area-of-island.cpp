class Solution {
    void BFS (vector<vector<int>>& grid, int i, int j, int &cnt)
    {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0) return;
        cnt++;
        grid[i][j] = 0;
        BFS (grid, i+1, j, cnt);
        BFS (grid, i-1, j, cnt);
        BFS (grid, i, j+1, cnt);
        BFS (grid, i, j-1, cnt);
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxi = 0;
        
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                int cnt = 0;
                if(grid[i][j])
                    BFS(grid, i, j, cnt);
                maxi = max(maxi, cnt);
            }
        }
        
        return maxi;
    }
};