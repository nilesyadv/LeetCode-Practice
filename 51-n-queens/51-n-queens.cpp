class Solution {
public:
     void solve(vector<vector<string>> &ans,vector<int> &down,vector<int> &up, vector<int> &left,int n,int column,vector<string> &v)
     {
         if(column==n)
         {
             ans.push_back(v);
             return;
         }
         
         for(int i=0;i<n;i++){
             if(left[i]==0 && down[i+column]==0 && up[n-column+i]==0)
             {
                 v[i][column]='Q';
                 left[i]=1;
                 down[i+column]=1;
                 up[n-column+i]=1;
                 solve(ans,down,up,left,n,column+1,v);
                 v[i][column]='.';
                 left[i]=0;
                 down[i+column]=0;
                 up[n-column+i]=0;
             }
         }
     }
 
public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        vector<string> v(n,string(n,'.'));
        vector<int> down(n*2,0);
        vector<int> up(n*2,0);
        vector<int> left(n,0);
        int column=0;
        
        solve(ans,down,up,left,n,column,v);
        
        return ans; 
    }
};