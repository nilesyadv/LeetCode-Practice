#define sp " "
class Solution {
public:
     void arrange(int &ans,int n,vector<int> &left,vector<int> &up,vector<int> &down,vector<vector<char>> &v,int col)
     {
         if(col==n)
         {
             ans++;
             return;
         }
         
         for(int i=0;i<n;i++)
         {
             if(left[i]==0 && up[i+col]==0 && down[n-col+i-1]==0)
             {
                 left[i]=1;
                 up[i+col]=1;
                 down[n-col+i-1]=1;
                 v[i][col]='Q';
                 arrange(ans,n,left,up,down,v,col+1);
                 left[i]=0;
                 up[i+col]=0;
                 down[n-col+i-1]=0;
                 v[i][col]='.';
             }
         }
     }
    
    int totalNQueens(int n) {
        vector<vector<char>> v(n,vector<char> (n,'.'));
     
        vector<int> left(n,0);
        vector<int> up(2*n-1,0);
        vector<int> down(2*n-1,0);
        int ans=0,col=0;;
        arrange(ans,n,left,up,down,v,col);
        return ans;
        
    }
};