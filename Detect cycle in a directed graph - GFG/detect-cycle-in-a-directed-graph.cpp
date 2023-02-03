//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
         vector<int> indegree(V, 0);
	    queue<int> q;
	    for(int i = 0; i < V; i++)
	    {
	        for(int j = 0; j < adj[i].size(); j++)
	            indegree[adj[i][j]]++;
	    }
	    
	    for(int i = 0; i < V; i++)
	        if(indegree[i] == 0) q.push(i);
	    
	    vector<int> ans;
	    while(q.size())
	    {
	        int i = q.front();
	        q.pop();
	        for(int j = 0; j < adj[i].size(); j++)
	        {
	            indegree[adj[i][j]]--;
	            if(indegree[adj[i][j]] == 0) q.push(adj[i][j]);
	        }
	        ans.push_back(i);
	    }
	    
	    return !(ans.size() == V);
	    
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends