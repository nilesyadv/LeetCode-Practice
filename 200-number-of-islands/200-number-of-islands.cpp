class Solution {
    void BFS (vector<vector<char>>& grid, int i, int j)
    {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0') return;
        
        grid[i][j] = '0';
        BFS (grid, i-1, j);
        BFS (grid, i+1, j);
        BFS (grid, i, j+1);
        BFS (grid, i, j-1);
        
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size(), c = grid[0].size(), cnt = 0;
        
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (grid[i][j] == '1')
                {
                    cnt += 1;
                    cout<<i<<" "<<j<<endl;
                    BFS(grid, i, j);
                }
            }
        }
        
        return cnt;
    }
};