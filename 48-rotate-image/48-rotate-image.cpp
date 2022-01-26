class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
       
        for(int i=0;i<n;i++)
        {
            int s=0,e=n-1;
            while(s<=e) swap(matrix[s++][i],matrix[e--][i]);
        }
        
        int row=0;
        while(row<n)
        {
            for(int i=row;i<n;i++)
            {
                swap(matrix[row][i],matrix[i][row]);
            }
            row++;
        }
    }
};