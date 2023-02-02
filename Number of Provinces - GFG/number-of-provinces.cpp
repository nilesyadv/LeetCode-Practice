//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution {
    void dfs(int i, vector<int> &vis, vector<vector<int>> &mat)
    {
        if(vis[i] == 1) return;
        vis[i] = 1;
        for(int j = 0; j < mat[i].size(); j++)
        {
            if(mat[i][j] != i && vis[mat[i][j]] == 0) dfs(mat[i][j], vis, mat);
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<vector<int>> mat(V + 1);
        for(int i = 0; i < adj.size(); i++)
        {
            for(int j = 0; j < adj[i].size(); j++)
            {
                int ii = i + 1;
                int jj = j + 1;
                if(ii != jj && adj[i][j] == 1)
                {
                    mat[ii].push_back(jj);
                }
            }
        }
        
        // for(int i = 1; i <= V; i++)
        // {
        //     //cout<<i<<"-->";
        //     for(int j = 0; j < mat[i].size(); j++)
        //     {
        //       cout<<mat[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        vector<int> vis(V+1, 0);
        int ans = 0;
        for(int i = 1; i <= V; i++)
        {
            // for(int j = 1; j <= V; j++) cout<<vis[j]<<" ";
            // cout<<endl;
            if(vis[i] == 0)
            {
                ans++;
                dfs(i, vis, mat);
            }
            // for(int j = 1; j <= V; j++) cout<<vis[j]<<" ";
            // cout<<endl;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends