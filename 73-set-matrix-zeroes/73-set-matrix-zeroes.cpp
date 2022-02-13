class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int column = matrix[0].size();
        bool r=0,c=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(matrix[i][j]==0)
                {
                    if(i==0) c=1;
                    if(j==0) r=1;
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
           
        for(int i=1;i<row;i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=0;j<column;j++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<column;i++)
        {
            if(matrix[0][i]==0)
            {
                for(int j=0;j<row;j++)
                {
                    matrix[j][i]=0;
                }
            }
        }
        
        
       // cout<<r<<c;
       if(r) for(int i=0;i<row;i++) matrix[i][0]=0;
       if(c) for(int j=0;j<column;j++) matrix[0][j]=0;
       
    }
};