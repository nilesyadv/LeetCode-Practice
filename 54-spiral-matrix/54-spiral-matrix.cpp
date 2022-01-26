class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int a[10][10]={0};
        vector<int>ans;
//         for(int i=0;i<row;i++)
//         {
//             for(int j=0;j<col;j++)
//             {
//                 cout<<arr[i][j]<<" ";
                
//             }
//             cout<<endl;
//         }
        //cout<<row<<" "<<col<<endl;
        int sr=0,ec=col-1,er=row-1,sc=0;
        int cnt=0;
        while(cnt<row*col)
        {
            for(int i=0;i<col;i++)
            {
                if(a[sr][i]==0)
                {
                    ans.push_back(matrix[sr][i]);
                    cnt++;
                    a[sr][i]=1;
                }
            }
            sr=sr+1;
            
            for(int i=0;i<row;i++)
            {
                if(a[i][ec]==0)
                {
                    ans.push_back(matrix[i][ec]);
                    cnt++;
                    a[i][ec]=1;
                }
            }
            ec=ec-1;
            
            for(int i=col-1;i>=0;i--)
            {
                if(a[er][i]==0)
                {
                    ans.push_back(matrix[er][i]);
                    cnt++;
                    a[er][i]=1;
                }
            }
            er=er-1;
            
            for(int i=row-1;i>=0;i--)
            {
                if(a[i][sc]==0)
                {
                    ans.push_back(matrix[i][sc]);
                    cnt++;
                    a[i][sc]=1;
                }
            }
            sc=sc+1;
            
        }
        return ans;
    }
        
};