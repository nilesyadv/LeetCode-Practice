class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size(), m = grid[0].size();
        for(int i = 0; i < m; i++)
        {
            int curri = 0, currj = i;
            while(curri < n){
                if(grid[curri][currj] == 1)
                {
                    if(currj + 1 < m && grid[curri][currj + 1] == 1)
                    {
                        curri++;
                        currj++;
                    }
                    else break;
                }
                else
                {
                     if(currj - 1 >= 0 && grid[curri][currj - 1] == -1)
                    {
                        curri++;
                        currj--;
                    }
                    else break;
                }
            }
            if(curri == n) ans.push_back(currj);
            else ans.push_back(-1);
        }
        return ans;
    }
};