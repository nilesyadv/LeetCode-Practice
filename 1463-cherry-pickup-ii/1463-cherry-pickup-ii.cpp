/*

You are given a rows x cols matrix grid representing a field of cherries where grid[i][j] represents the number of cherries that you can collect from the (i, j) cell.

You have two robots that can collect cherries for you:

Robot #1 is located at the top-left corner (0, 0), and
Robot #2 is located at the top-right corner (0, cols - 1).
Return the maximum number of cherries collection using both robots by following the rules below:

From a cell (i, j), robots can move to cell (i + 1, j - 1), (i + 1, j), or (i + 1, j + 1).
When any robot passes through a cell, It picks up all cherries, and the cell becomes an empty cell.
When both robots stay in the same cell, only one takes the cherries.
Both robots cannot move outside of the grid at any moment.
Both robots should reach the bottom row in grid.

Input: grid = [[3,1,1],[2,5,1],[1,5,5],[2,1,1]]
Output: 24
Explanation: Path of robot #1 and #2 are described in color green and blue respectively.
Cherries taken by Robot #1, (3 + 2 + 5 + 2) = 12.
Cherries taken by Robot #2, (1 + 5 + 5 + 1) = 12.
Total of cherries: 12 + 12 = 24.

https://assets.leetcode.com/uploads/2020/04/29/sample_1_1802.png

rows == grid.length
cols == grid[i].length
2 <= rows, cols <= 70
0 <= grid[i][j] <= 100



*/

// [3,1,1]
// [2,5,1]
// [1,5,5]
// [2,1,1]

// [1,5,6,3,4]
// [5,6,8,9,3]
// [4,5,6,8,2]




class Solution {
public:
     int dp[100][100][100];
     
    
    int maxCherry(int row1,int col1, int col2, vector<vector<int>>& grid, int rows,int coloum)
    {
        if(row1<0 || row1>=rows) return 0;
        if(col1<0 || col1>=coloum) return 0;
        if(col2<0 || col2>=coloum) return 0;

        if(dp[row1][col1][col2]!=-1) return dp[row1][col1][col2];
        

        int ans = grid[row1][col1];
        if(col1 != col2){
            ans += grid[row1][col2];
        }
         
        int maxPossibleCherry=0;
        for(int i=-1;i<=1;i++)
        {
            for(int j=-1; j<=1;j++)
            {
                maxPossibleCherry=max(maxPossibleCherry,maxCherry(row1+1,col1+i,col2+j,grid,rows,coloum));
            }
        }
        return dp[row1][col1][col2] = ans+maxPossibleCherry;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int rows=grid.size();
        int coloum=grid[0].size();
        for(int i=0;i<100;i++) for(int j=0;j<100;j++) for(int k=0;k<100;k++) dp[i][j][k]=-1;
        return maxCherry(0,0,coloum-1, grid,rows,coloum);
    }
};










