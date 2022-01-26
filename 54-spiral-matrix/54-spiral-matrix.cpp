class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>ans;

        int sr=0,ec=col-1,er=row-1,sc=0;
        int cnt=0;
        while(cnt<row*col)
        {
            for(int i=sc;cnt<row*col && i<=ec;i++)
            {
                    ans.push_back(matrix[sr][i]);
                    cnt++;
            }
            sr=sr+1;
            
            for(int i=sr;cnt<row*col && i<=er;i++)
            {
                    ans.push_back(matrix[i][ec]);
                    cnt++;  
            }
            ec=ec-1;
            
            for(int i=ec;cnt<row*col && i>=sc;i--)
            {
               ans.push_back(matrix[er][i]);
                    cnt++;
            }
            er=er-1;
            
            for(int i=er;cnt<row*col && i>=sr;i--)
            {
                    ans.push_back(matrix[i][sc]);
                    cnt++;         
            }
            sc=sc+1;
            
        }
        return ans;
    }
        
};