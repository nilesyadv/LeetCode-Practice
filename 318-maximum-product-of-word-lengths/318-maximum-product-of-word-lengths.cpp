#define sp " "
class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        int n=words.size();
        vector<int> v(n ,0);
        for(int i=0;i<n;i++)
            for(int j=0;j<words[i].size();j++)
                v[i]=v[i]|(1<<((int)(words[i][j]-'a')));
        
        int ans=0;
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                if(!(v[i]&v[j])) ans=max(ans,(int)(words[i].size()*words[j].size()));
        
        return ans;
    }
};