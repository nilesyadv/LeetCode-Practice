class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int r=matrix.size();
        int c=matrix[0].size();
        bool row=false,col=false;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    if(i==0) col=true;
                    if(j==0) row=true;
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
            }
        }
        //cout<<col;
        if(row) 
        {
            for(int i=0;i<r;i++) matrix[i][0]=0;
        }
        
        if(col) 
        {
            for(int i=0;i<c;i++) matrix[0][i]=0;
        }
    }
};