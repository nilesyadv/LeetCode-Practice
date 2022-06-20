class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        
        vector<pair<int,string>> v;
        int n=words.size();
        
        for(int i=0;i<n;i++) v.push_back({words[i].size(),words[i]});
        sort(v.begin(),v.end());
        
        string s="";
        unordered_map<string,int> m;
       
        for(int i=n-1;i>=0;i--)
        {
            if(m[v[i].second]==0)
            {
                int j=s.size();
                s=s+v[i].second+'#';
                m[s]=1;
                int k=s.size()-2;
                for(;j<=k;j++)
                    m[s.substr(j,k-j+1)]=1;
            }
        }
        return s.size();
    }
};