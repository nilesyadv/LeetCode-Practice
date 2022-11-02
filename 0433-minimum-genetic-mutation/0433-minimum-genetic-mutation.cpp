class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        int size = bank.size(); 
        
        unordered_set<string> dictionary; 
        for(int i = 0; i < size; i++) 
        {
            dictionary.insert(bank[i]);
        }
        
        
        if(dictionary.find(end) == dictionary.end())
        {
            return -1;
        }
        
        vector<char> available = {'A', 'C', 'G', 'T'};
        
        
        unordered_set<string> vis;
        
        int ans = 0;
        
        queue<string> q;
        q.push(start); 
        vis.insert(start); 
        
        while(!q.empty())
        {
            int n = q.size(); 
            while(n--)
            {
                string curr = q.front(); 
                q.pop(); 
                
                if(curr == end) 
                {
                    return ans;
                }
                
                
                for(int i = 0; i < 8; i++)
                {
                    char orig = curr[i]; 
                    
                    
                    for(int j = 0; j < 4; j++) 
                    {   
                        curr[i] = available[j]; 
                        
                        
                        if(dictionary.find(curr) != dictionary.end())
                        {
                            
                            if(vis.find(curr) == vis.end())
                            {
                                q.push(curr); 
                                vis.insert(curr); 
                            }
                        }
                    }
                   
                    curr[i] = orig;
                }
            }
            ans++; 
        }
        
        return -1; 
    }
};