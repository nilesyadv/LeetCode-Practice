#define sp " "
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                int x=100000,y=100000;
                if(j-1>=0) x=triangle[i-1][j-1];
                if(j!=i) y=triangle[i-1][j];
                triangle[i][j]=triangle[i][j]+min(x,y);
            }
        }
       
        int ans=100000;
        for(int i=0;i<n;i++) ans=min(ans,triangle[n-1][i]);
        return ans;
    }
};