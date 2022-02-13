class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int column = matrix[0].size();
        int a[row], b[column];
        for (int i = 0; i < row; i++)
            a[i] = -1;
        for (int i = 0; i < column; i++)
            b[i] = -1;
        // cout<<row<<" "<<column<<endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (matrix[i][j] == 0)
                {
                    a[i] = 0;
                    b[j] = 0;
                }
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (a[i] == 0 || b[j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};